/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFResource.h>

@class NSString, WFAction;

@interface WFParameterRelationResource : WFResource

{
    WFAction *_action;
}

@property (weak, nonatomic) WFAction *action;
@property (nonatomic, readonly) NSString *parameterKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)mustBeAvailableForDisplay;

- (void)refreshAvailability;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (id)initWithParameterKey:(id)arg1 parameterValues:(id)arg2 relation:(id)arg3;
- (id)comparedValues;
- (void)setupWithAction:(id)arg1;

@end
