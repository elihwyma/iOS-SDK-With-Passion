/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UISearchBar.h>

@class NSString, UILabel;

@interface _SearchEntryWithMatchDisplay : UISearchBar

{
    NSString *_matchDisplayString;
    UILabel *_matchDisplayLabel;
}

@property (readonly) UILabel *matchDisplayLabel;
@property (retain, nonatomic) NSString *matchDisplayString;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)matchDisplayVisible:(_Bool)arg1;
- (id)_createMatchDisplayLabel;

@end
