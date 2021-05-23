/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUTitleDescriptionCell.h>

@class NSString;

@interface HUButtonCell : HUTitleDescriptionCell

{
    _Bool _destructive;
    _Bool _textColorFollowsTintColor;
    long long _textAlignment;
}

@property (nonatomic, getter=isDestructive) _Bool destructive;
@property (nonatomic) long long textAlignment;
@property (nonatomic) _Bool textColorFollowsTintColor;
@property (retain, nonatomic) NSString *descriptionText;

- (void)prepareForReuse;
- (void)tintColorDidChange;
- (void)didMoveToSuperview;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateTitle;

@end
