/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <UIKit/UITableViewCell.h>

@interface PSSearchResultsCell : UITableViewCell

{
    _Bool _shouldIndentContent;
    _Bool _shouldIndentSeparator;
}

@property (nonatomic) _Bool shouldIndentContent;
@property (nonatomic) _Bool shouldIndentSeparator;

+ (id)reuseIdentifier;

- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
