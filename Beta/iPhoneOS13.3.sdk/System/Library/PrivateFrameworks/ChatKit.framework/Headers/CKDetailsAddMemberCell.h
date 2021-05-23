/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKDetailsCell.h>

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface CKDetailsAddMemberCell : CKDetailsCell

{
    UILabel *_addLabel;
    UIImageView *_addIcon;
}

@property (retain, nonatomic) UILabel *addLabel;
@property (retain, nonatomic) UIImageView *addIcon;

+ (double)preferredHeight;
+ (id)reuseIdentifier;
+ (Class)cellClass;

- (void)setEnabled:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
