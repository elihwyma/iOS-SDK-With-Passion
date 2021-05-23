/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIGestureRecognizer.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIPreviewInteraction;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionFailureRelationshipGestureRecognizer : UIGestureRecognizer <Swift>

{
    UIPreviewInteraction *_previewInteraction;
}

@property (weak, nonatomic) UIPreviewInteraction *previewInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setDelegate:(id)arg1;
- (void)_gestureRecognizerFailed:(id)arg1;
- (id)initWithPreviewInteraction:(id)arg1;
- (void)setStateToFailed;
- (void)setStateToRecognized;

@end
