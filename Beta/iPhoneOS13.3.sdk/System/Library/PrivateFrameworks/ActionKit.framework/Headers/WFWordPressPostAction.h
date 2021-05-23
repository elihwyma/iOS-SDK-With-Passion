/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@class NSString;

@interface WFWordPressPostAction : WFAction

{
    id _observer;
}

@property (retain, nonatomic) id observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)initializeParameters;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (_Bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (id)suggestedTagsForTagField:(id)arg1;
- (void)wasAddedToWorkflow:(id)arg1;
- (void)wasRemovedFromWorkflow:(id)arg1;
- (id)possibleStatesForEnumeration:(id)arg1;
- (id)defaultSerializedRepresentationForEnumeration:(id)arg1;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (void)updatePossibleStates;
- (void)generateHTMLFromInput:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateAccountMetadata;
- (void)updateHiddenStates;

@end
