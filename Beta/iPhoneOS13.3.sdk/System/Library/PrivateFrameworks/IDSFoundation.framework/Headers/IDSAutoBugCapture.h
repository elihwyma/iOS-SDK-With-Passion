/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@interface IDSAutoBugCapture : NSObject

+ (_Bool)isSupported;
+ (void)triggerCaptureWithEvent:(long long)arg1 destinations:(id)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)triggerCaptureWithEvent:(long long)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
