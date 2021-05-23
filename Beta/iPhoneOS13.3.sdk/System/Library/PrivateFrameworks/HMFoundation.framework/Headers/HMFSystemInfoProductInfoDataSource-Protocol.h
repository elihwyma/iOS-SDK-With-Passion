/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

#import <HMFoundation/Swift-Protocol.h>

@class NSString;

@protocol HMFSystemInfoProductInfoDataSource <Swift>

@property (nonatomic, readonly) long long productPlatform;
@property (nonatomic, readonly) long long productClass;
@property (nonatomic, readonly) long long productVariant;
@property (copy, nonatomic, readonly) NSString *modelIdentifier;

@end
