/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIView.h>

@class CNLabeledBadge, NSDictionary;

__attribute__((visibility("hidden")))
@interface CNGeminiBadge : UIView

{
    CNLabeledBadge *_labeledBadge;
}

@property (retain, nonatomic) CNLabeledBadge *labeledBadge;
@property (copy, nonatomic) NSDictionary *viewAttributes;

+ (id)geminiBadgeWithText:(id)arg1;

- (void)setText:(id)arg1;

@end
