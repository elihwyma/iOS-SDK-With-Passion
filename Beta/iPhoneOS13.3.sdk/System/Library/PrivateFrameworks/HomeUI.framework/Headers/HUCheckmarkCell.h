/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUActivityIndicatorCell.h>

@interface HUCheckmarkCell : HUActivityIndicatorCell

{
    _Bool _checked;
}

@property (nonatomic) _Bool checked;

- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
