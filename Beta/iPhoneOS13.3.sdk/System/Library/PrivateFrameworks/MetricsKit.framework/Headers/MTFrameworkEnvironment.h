/*
 Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

#import <Foundation/NSObject.h>

@interface MTFrameworkEnvironment : NSObject

+ (void)initialize;
+ (id)sharedEnvironment;
+ (void)setSharedEnvironment:(id)arg1;
+ (void)withEnvironment:(id)arg1 execute:(CDUnknownBlockType)arg2;

- (id)date;
- (id)valueForEntitlement:(id)arg1;
- (_Bool)isInternalBuild;
- (_Bool)isStandardEnvironment;

@end
