/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateViewConfiguration : NSObject

{
    _Bool _darkKeyboard;
    _Bool _shouldAlwaysShowSortControl;
    _Bool _shouldUsePredictionViewSecureRenderTraits;
}

@property (nonatomic, readonly) UIColor *highlightedBackgroundColor;
@property (nonatomic) _Bool darkKeyboard;
@property (nonatomic, readonly) unsigned long long rowsToExtend;
@property (nonatomic, readonly) unsigned long long maxNumberOfProactiveCandidates;
@property (nonatomic, readonly) _Bool shouldResizeKeyboardBackdrop;
@property (nonatomic, readonly) _Bool shouldAlwaysShowSortControl;
@property (nonatomic, readonly) _Bool shouldUsePredictionViewSecureRenderTraits;
@property (nonatomic, readonly) _Bool willCoverKeyboardLayout;
@property (nonatomic, readonly) _Bool allowsPullDownGesture;
@property (nonatomic, readonly) struct CGSize preferredInlineFloatingViewSize;

+ (id)configuration;

- (id)initialState;
- (id)extendedState;
- (id)extendedScrolledState;
- (double)candidateDefaultFontSize;
- (id)candidateFontWithSize:(double)arg1;
- (_Bool)usesReducedFontSize;

@end
