//
//  NSObject+NeusoftAdd.h
//  NeusoftUtility
//
//  Created by admin on 2022/7/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (NeusoftAdd)

- (BOOL)isContainsProperty:(NSString *)propertyName;

- (void)addProperty:(NSString *)propertyName;

@end

NS_ASSUME_NONNULL_END
