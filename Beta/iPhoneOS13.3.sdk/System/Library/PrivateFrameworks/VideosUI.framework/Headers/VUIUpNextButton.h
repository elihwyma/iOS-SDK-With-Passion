/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIButton.h>

@class NSLayoutConstraint, NSString, VUIUpNextButtonProperties;

__attribute__((visibility("hidden")))
@interface VUIUpNextButton : VUIButton

{
    VUIUpNextButtonProperties *_properties;
    NSLayoutConstraint *_stackViewWidthConstraint;
}

@property (retain, nonatomic) NSLayoutConstraint *stackViewWidthConstraint;
@property (retain, nonatomic) VUIUpNextButtonProperties *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct CGSize)intrinsicContentSize;
- (id)largeContentTitle;
- (void)setTintColor:(id)arg1;
- (void)updateWithElement:(id)arg1;
- (id)initWithLayout:(id)arg1 interfaceStyle:(long long)arg2;
- (void)_selectButtonAction:(id)arg1 eventType:(id)arg2;
- (void)_updateWidthConstraintsFromOldSize:(struct CGSize)arg1 toNewSize:(struct CGSize)arg2;
- (void)upNextStateChangedToAdded;
- (void)upNextStateChangedToRemoved;

@end
