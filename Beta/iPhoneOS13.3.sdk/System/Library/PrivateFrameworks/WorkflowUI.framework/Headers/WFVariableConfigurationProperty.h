/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSString, WFContentProperty;

@interface WFVariableConfigurationProperty : NSObject

{
    _Bool _negativeProperty;
    WFContentProperty *_contentProperty;
    NSString *_label;
}

@property (nonatomic, readonly) WFContentProperty *contentProperty;
@property (nonatomic, readonly) _Bool negativeProperty;
@property (nonatomic, readonly) NSString *label;

- (id)initWithLabel:(id)arg1;
- (id)initWithContentProperty:(id)arg1 negativeProperty:(_Bool)arg2;

@end
