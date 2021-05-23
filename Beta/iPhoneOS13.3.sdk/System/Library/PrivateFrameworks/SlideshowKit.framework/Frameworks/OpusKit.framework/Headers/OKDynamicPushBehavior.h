/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <UIKit/UIPushBehavior.h>

@class NSString;

@interface OKDynamicPushBehavior : UIPushBehavior

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)supportedSettings;

- (id)init;
- (void)dealloc;
- (id)initWithSettings:(id)arg1;
- (id)settingObjectForKey:(id)arg1;
- (void)setUserSettingObject:(id)arg1 forKey:(id)arg2;

@end
