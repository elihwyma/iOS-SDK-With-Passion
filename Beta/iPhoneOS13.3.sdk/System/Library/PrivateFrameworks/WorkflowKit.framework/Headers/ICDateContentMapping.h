/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/ICContentMapping.h>

@class NSDateFormatter;

@interface ICDateContentMapping : ICContentMapping

{
    NSDateFormatter *_dateFormatter;
}

@property (retain, nonatomic) NSDateFormatter *dateFormatter;

- (id)initWithDefinition:(id)arg1;
- (void)getStringRepresentation:(CDUnknownBlockType)arg1 withInput:(id)arg2 parameters:(id)arg3;

@end
