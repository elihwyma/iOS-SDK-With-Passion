/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel, UIView, WBSSavedPassword;

__attribute__((visibility("hidden")))
@interface SFPasswordTableViewCell : UITableViewCell

{
    UILabel *_monogramLabel;
    UIView *_monogramBackgroundView;
    WBSSavedPassword *_savedPassword;
    NSString *_searchPattern;
}

@property (nonatomic, readonly) WBSSavedPassword *savedPassword;
@property (nonatomic, readonly) NSString *searchPattern;

- (void)setIcon:(id)arg1;
- (void)safari_copyUserName;
- (void)safari_copyPassword;
- (void)showPlaceholderImageForDomain:(id)arg1 backgroundColor:(id)arg2;
- (void)setSavedPassword:(id)arg1 searchPattern:(id)arg2;

@end
