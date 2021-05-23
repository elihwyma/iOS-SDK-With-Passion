/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKDetailsContactsTableViewCell.h>

@class NSMutableArray;

@interface CKDetailsContactsStandardTableViewCell : CKDetailsContactsTableViewCell

{
    NSMutableArray *_visibleButtons;
}

@property (retain, nonatomic) NSMutableArray *visibleButtons;

+ (double)preferredHeight;
+ (double)estimatedHeight;

- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setShowsLocation:(_Bool)arg1;
- (void)_updateVisibleButtons;

@end
