/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UITargetedPreview, _UIAnchoredClickHighlightPlatterView;

__attribute__((visibility("hidden")))
@interface _UIClickHighlightInteractionEffect : NSObject <Swift>

{
    long long _phase;
    long long _inflightAnimationCount;
    _Bool _isActive;
    UITargetedPreview *_targetedPreview;
    _UIAnchoredClickHighlightPlatterView *_highlightPlatter;
    CDUnknownBlockType _completionBlock;
}

@property (retain, nonatomic) _UIAnchoredClickHighlightPlatterView *highlightPlatter;
@property (retain, nonatomic) UITargetedPreview *targetedPreview;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (nonatomic, readonly) UITargetedPreview *targetedPreviewForEffectContinuation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)interaction:(id)arg1 didChangeWithContext:(id)arg2;
- (id)initWithTargetedPreview:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_createHighlightPlatter;
- (void)_completeHighlightEffect;

@end
