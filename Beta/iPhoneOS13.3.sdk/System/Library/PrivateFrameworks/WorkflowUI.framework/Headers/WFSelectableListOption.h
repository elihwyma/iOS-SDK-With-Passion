/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WFSelectableListOption : NSObject

{
    _Bool _selected;
    NSString *_displayTitle;
    id _value;
}

@property (copy, nonatomic, readonly) NSString *displayTitle;
@property (nonatomic, readonly) id value;
@property (nonatomic, getter=isSelected) _Bool selected;

- (id)initWithDisplayTitle:(id)arg1 value:(id)arg2;

@end
