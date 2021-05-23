/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSString, UISUserInterfaceStyleMode;

@interface WFSetAppearanceIntentHandler : NSObject

{
    UISUserInterfaceStyleMode *_styleMode;
}

@property (retain, nonatomic) UISUserInterfaceStyleMode *styleMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)handleSetAppearance:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveStyleForSetAppearance:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setDeviceAppearance:(long long)arg1;

@end
