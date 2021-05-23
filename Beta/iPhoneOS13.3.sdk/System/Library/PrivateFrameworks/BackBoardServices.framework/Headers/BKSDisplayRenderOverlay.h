/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

#import <BackBoardServices/Swift-Protocol.h>

@class BKSDisplayProgressIndicatorProperties, BKSDisplayRenderOverlayDescriptor, CADisplay, NSString;

@interface BKSDisplayRenderOverlay : NSObject <Swift>

{
    BKSDisplayRenderOverlayDescriptor *_descriptor;
}

@property (nonatomic, readonly, getter=_descriptor) BKSDisplayRenderOverlayDescriptor *descriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *name;
@property (retain, nonatomic, readonly) CADisplay *display;
@property (nonatomic, readonly) long long interfaceOrientation;
@property (nonatomic, readonly) _Bool lockBacklight;
@property (nonatomic, readonly) BKSDisplayProgressIndicatorProperties *progressIndicatorProperties;
@property (nonatomic, readonly, getter=isInterstitial) _Bool interstitial;
@property (nonatomic, readonly) BKSDisplayRenderOverlayDescriptor *overlayDescriptor;

+ (id)existingOverlayForDisplay:(id)arg1;
+ (id)dismissActions;

- (void)freeze;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)dismiss;
- (void)present;
- (id)initWithDescriptor:(id)arg1;
- (void)dismissWithAnimation:(id)arg1;

@end
