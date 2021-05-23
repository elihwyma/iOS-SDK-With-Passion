/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

#import <BackBoardServices/Swift-Protocol.h>

@class BKSDisplayRenderOverlayDescriptor, NSString;

@interface BKSDisplayInterstitialRenderOverlayDismissAction : NSObject <Swift>

{
    BKSDisplayRenderOverlayDescriptor *_overlayDescriptor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) BKSDisplayRenderOverlayDescriptor *overlayDescriptor;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)dismiss;
- (id)initWithDescriptor:(id)arg1;
- (void)dismissWithAnimation:(id)arg1;

@end
