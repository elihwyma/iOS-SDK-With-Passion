/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKBTutorialModalDisplay.h>

@class NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface UIKBEditingGesturesIntroduction : UIKBTutorialModalDisplay

{
    NSLayoutConstraint *_topPaddingConstraint;
}

@property (nonatomic, readonly) long long appearance;
@property (retain, nonatomic) NSLayoutConstraint *topPaddingConstraint;

+ (_Bool)shouldShowEditingIntroduction;

- (id)textBodyFont;
- (id)buttonTitle;
- (void)extraButtonTapAction;
- (id)mediaContents;
- (id)textTitleDescriptions;
- (id)textBodyDescriptions;
- (void)updateConstraints;
- (id)framedViewWithEmbeddedImageNamed:(id)arg1 ofType:(id)arg2;
- (double)pagingInterval;
- (_Bool)presentsFullScreen;

@end
