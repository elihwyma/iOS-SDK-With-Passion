/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKBKeyView.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface UIKBCandidateView : UIKBKeyView

{
    CDStruct_227bb23d _visualStyling;
    UIView *_candidateKey;
}

@property (nonatomic) CDStruct_227bb23d visualStyling;
@property (retain, nonatomic) UIView *candidateKey;

- (void)dealloc;
- (void)displayLayer:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;
- (id)candidateList;
- (_Bool)isTenKey;
- (void)updateCandidateKey;
- (void)clearCandidateKey;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;

@end
