/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFVariableAggrandizement.h>

@class NSString, NSUnit;

@interface WFUnitVariableAggrandizement : WFVariableAggrandizement

{
    NSUnit *_unit;
}

@property (nonatomic, readonly) NSString *unitType;
@property (nonatomic, readonly) NSUnit *unit;

- (id)processedContentClasses:(id)arg1;
- (void)applyToContentCollection:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithUnit:(id)arg1 unitType:(id)arg2;
- (id)availableUnits;

@end
