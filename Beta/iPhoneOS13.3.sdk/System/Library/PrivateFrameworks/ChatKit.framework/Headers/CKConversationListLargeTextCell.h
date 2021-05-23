/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKConversationListCell.h>

@class NSArray, NSLayoutConstraint, NSTextAttachment, UIColor, UILayoutGuide;

@interface CKConversationListLargeTextCell : CKConversationListCell

{
    UILayoutGuide *_firstLineLayoutGuide;
    NSLayoutConstraint *_editingDependentConstraint;
    NSArray *_contentSizeCategoryDependentConstraints;
    NSTextAttachment *_unreadIndicatorAttachment;
    UIColor *_unreadIndicatorColor;
}

@property (retain, nonatomic) UILayoutGuide *firstLineLayoutGuide;
@property (retain, nonatomic) NSLayoutConstraint *editingDependentConstraint;
@property (retain, nonatomic) NSArray *contentSizeCategoryDependentConstraints;
@property (retain, nonatomic) NSTextAttachment *unreadIndicatorAttachment;
@property (retain, nonatomic) UIColor *unreadIndicatorColor;

+ (id)identifierForConversation:(id)arg1;
+ (double)cellHeight;
+ (id)hyphenationParagraphStyle;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)contentSizeCategoryDidChange;
- (void)updateUnreadIndicatorWithImage:(id)arg1 tintColor:(id)arg2;
- (void)updateFromLabelWithText:(id)arg1;
- (void)updateForEditing:(_Bool)arg1;
- (id)_constraintForEditing:(_Bool)arg1;
- (id)_contentSizeCategoryDependentConstraints;

@end
