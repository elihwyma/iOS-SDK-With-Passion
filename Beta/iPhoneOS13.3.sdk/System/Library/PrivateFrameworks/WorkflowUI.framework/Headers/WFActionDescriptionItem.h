/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, NSString;

@interface WFActionDescriptionItem : NSObject

{
    NSString *_itemTitle;
    NSAttributedString *_itemDescription;
}

@property (nonatomic, readonly) NSString *itemTitle;
@property (nonatomic, readonly) NSAttributedString *itemDescription;

+ (id)itemWithTitle:(id)arg1 description:(id)arg2;
+ (id)itemWithTitle:(id)arg1 attributedDescription:(id)arg2;

- (id)initWithTitle:(id)arg1 description:(id)arg2;

@end
