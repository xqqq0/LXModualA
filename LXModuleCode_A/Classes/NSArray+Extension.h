//
//  NSArray+Extension.h
//  LXMath
//
//  Created by 周培玉 on 2018/1/17.
//  Copyright © 2018年 LXM. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (Extension)

/**
  * 翻转数组
 */
- (NSArray *)reverseArray;

/// 两个数组内容是否相等
/// @param array1 数组一
/// @param array2 数组二
+ (BOOL)array:(NSArray *)array1 isEqualTo:(NSArray *)array2;

///数组安全访问
- (id)safeObjectAtIndex:(NSUInteger)index;

@end
