/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKDetailsAddMemberCell.h>

@class UILayoutGuide;

__attribute__((visibility("hidden")))
@interface CKDetailsAddMemberLargeTextCell : CKDetailsAddMemberCell

{
    UILayoutGuide *_leadingGuide;
}

@property (retain, nonatomic) UILayoutGuide *leadingGuide;

+ (double)preferredHeight;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_initLabel;
- (void)_initConstraints;

@end
