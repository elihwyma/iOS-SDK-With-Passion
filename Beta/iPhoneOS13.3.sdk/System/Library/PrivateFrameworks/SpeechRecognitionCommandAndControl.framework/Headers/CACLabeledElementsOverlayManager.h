/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <SpeechRecognitionCommandAndControl/CACSimpleContentViewManager.h>

@class NSArray, NSMutableArray;

@protocol CACLabeledElementsOverlayManagerDelegate;

@interface CACLabeledElementsOverlayManager : CACSimpleContentViewManager

{
    NSMutableArray *_labeledElements;
    id <CACLabeledElementsOverlayManagerDelegate> _delegate;
}

@property (weak, nonatomic) id <CACLabeledElementsOverlayManagerDelegate> delegate;
@property (nonatomic, readonly) NSArray *labeledElements;

+ (void)assignNumbersToLabeledElements:(id)arg1 numberingStrategy:(int)arg2;

- (_Bool)isOverlay;
- (void)hideAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startDelayedDimmingOfNumbers;
- (void)stopDelayedDimmingOfNumbers;
- (void)clearLabeledElements;
- (void)showLabeledElementsOverlayWithLabeledElements:(id)arg1 forceNoArrow:(_Bool)arg2;
- (void)addLabeledElements:(id)arg1 forceNoArrow:(_Bool)arg2;
- (id)_optimizeLabeledElements:(id)arg1 startingNumberedLabelsAtIndex:(unsigned long long)arg2 forceNoArrow:(_Bool)arg3;
- (id)_findLabeledElementsThatIntersectsLabelRect:(struct CGRect)arg1 fromLabeledElement:(id)arg2 justLabelRect:(_Bool)arg3 additionalElements:(id)arg4;
- (void)showLabeledElementsOverlayWithLabeledElements:(id)arg1;

@end
