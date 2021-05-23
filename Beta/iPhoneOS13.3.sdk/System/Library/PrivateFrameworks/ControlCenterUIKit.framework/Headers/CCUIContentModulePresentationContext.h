/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

#import <Foundation/NSObject.h>

@interface CCUIContentModulePresentationContext : NSObject

{
    long long _environment;
}

@property (nonatomic, readonly) long long environment;

+ (id)defaultControlCenterPresentationContext;
+ (id)defaultAlertPresentationContext;

- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEnvironment:(long long)arg1;

@end
