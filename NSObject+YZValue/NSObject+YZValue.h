//
//  NSObject+YZValue.h
//  YZValue
//
//  Created by denman on 15/10/12.
//  Copyright © 2015年 sina. All rights reserved.
//

#import <Foundation/Foundation.h>
/**
 *  此分类的目的主要用来在取值设置值的时候容错
 */
@interface NSObject (YZValue)

/***********************key***************************/
- (BOOL)booleanValueForKey:(NSString *)key;

- (int)intValueForKey:(NSString *)key;

- (long)longValueForKey:(NSString *)key;

- (long long)longLongValueForKey:(NSString *)key;

- (float)floatValueForKey:(NSString *)key;

- (double)doubleValueForKey:(NSString *)key;

- (id)objectValueForKey:(NSString *)key;

- (NSString *)stringValueForKey:(NSString *)key;

- (NSDictionary *)dictionaryValueForKey:(NSString *)key;

- (NSArray *)arrayValueForKey:(NSString *)key;

/***********************keyPath***************************/
- (BOOL)booleanValueForKeyPath:(NSString *)keyPath;

- (int)intValueForKeyPath:(NSString *)keyPath;

- (long)longValueForKeyPath:(NSString *)keyPath;

- (long long)longLongValueForKeyPath:(NSString *)keyPath;

- (float)floatValueForKeyPath:(NSString *)keyPath;

- (double)doubleValueForKeyPath:(NSString *)keyPath;

- (id)objectValueForKeyPath:(NSString *)keyPath;

- (NSString *)stringValueForKeyPath:(NSString *)keyPath;

- (NSDictionary *)dictionaryValueForKeyPath:(NSString *)keyPath;

- (NSArray *)arrayValueForKeyPath:(NSString *)keyPath;

/***********************key+defalutValue***************************/
- (BOOL)booleanValueForKey:(NSString *)key defaultValue:(BOOL)defalutValue;

- (int)intValueForKey:(NSString *)key defaultValue:(int)defalutValue;

- (long)longValueForKey:(NSString *)key defaultValue:(long)defalutValue;

- (long long)longLongValueForKey:(NSString *)key defaultValue:(long long)defalutValue;

- (float)floatValueForKey:(NSString *)key defaultValue:(float)defalutValue;

- (double)doubleValueForKey:(NSString *)key defaultValue:(double)defalutValue;

- (id)objectValueForKey:(NSString *)key defaultValue:(id)defalutValue;
//object
-(NSString *)stringValueForKey:(NSString *)key defaultValue:(NSString *)defalutValue;

/***********************keyPath+defalutValue***************************/
- (BOOL)booleanValueForKeyPath:(NSString *)keyPath defaultValue:(BOOL)defalutValue;

- (int)intValueForKeyPath:(NSString *)keyPath defaultValue:(int)defalutValue;

- (long)longValueForKeyPath:(NSString *)keyPath defaultValue:(long)defalutValue;

- (long long)longLongValueForKeyPath:(NSString *)keyPath defaultValue:(long long)defalutValue;

- (float)floatValueForKeyPath:(NSString *)keyPath defaultValue:(float)defalutValue;

- (double)doubleValueForKeyPath:(NSString *)keyPath defaultValue:(double) defalutValue;

- (id)objectValueForKeyPath:(NSString *)keyPath defaultValue:(id) defalutValue;

- (NSString *)stringValueForKeyPath:(NSString *)keyPath defaultValue:(NSString *)defalutValue;

/***********************setObjectVaule***************************/
- (void)setObjectValue:(id)value forKey:(NSString *)key;

- (void)setObjectValue:(id)value forKeyPath:(NSString *)keyPath;

/***********************isKindOf***************************/
- (NSArray *)arrayValue;

- (NSDictionary *)dictionaryValue;

/***********************arrayOverBounds***************************/
- (id)objectValueAtIndex:(NSUInteger)index;

@end
