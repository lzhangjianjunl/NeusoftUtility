//
//  NSURL+NeusoftAdd.h
//  NeusoftUtility
//
//  Created by admin on 2022/7/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSURL (NeusoftAdd)

- (NSDictionary<NSString *, NSString *> *)queryParameters;

@end

NS_ASSUME_NONNULL_END
