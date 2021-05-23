/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFDynamicEnumerationParameter.h>

@class INCodableAttribute, NSString;

@interface WFCustomIntentDynamicEnumerationParameter : WFDynamicEnumerationParameter

{
    INCodableAttribute *_codableAttribute;
}

@property (retain, nonatomic) INCodableAttribute *codableAttribute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (Class)singleStateClass;

@end
