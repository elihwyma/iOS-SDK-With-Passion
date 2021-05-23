/*
 Image: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
 */

#import <UIKit/UIControl.h>

@class HACCLiveListenLevelGroup, NSString, UILabel, UIVisualEffectView;

@protocol HACCContentModuleDelegate;

@interface HACCLiveListenButton : UIControl

{
    UIVisualEffectView *_titleContainer;
    UIVisualEffectView *_subtitleContainer;
    _Bool _isListening;
    unsigned long long module;
    id <HACCContentModuleDelegate> delegate;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    HACCLiveListenLevelGroup *_levelGroup;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) HACCLiveListenLevelGroup *levelGroup;
@property (nonatomic) _Bool isListening;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <HACCContentModuleDelegate> delegate;
@property (nonatomic) unsigned long long module;

- (_Bool)enabled;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)updateConstraints;
- (void)buttonTapped:(id)arg1;
- (void)updateValue;
- (id)contentValue;
- (void)liveListenAudioLevelDidChange:(double)arg1;
- (struct CGSize)preferredSizeForSize:(struct CGSize)arg1;
- (unsigned long long)lineCountForWidth:(double)arg1;

@end
