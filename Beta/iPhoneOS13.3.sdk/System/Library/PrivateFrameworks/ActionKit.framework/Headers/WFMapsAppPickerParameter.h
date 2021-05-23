/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, NSOrderedSet;

@interface WFMapsAppPickerParameter : WFEnumerationParameter

{
    NSArray *_possibleStates;
    NSOrderedSet *_supportedAppIdentifiers;
}

@property (nonatomic, readonly) NSOrderedSet *supportedAppIdentifiers;

- (void)dealloc;
- (id)initWithDefinition:(id)arg1;
- (id)possibleStates;
- (id)possibleStatesForLocalization;
- (id)localizedLabelForPossibleState:(id)arg1;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;
- (void)refreshInstalledApps;
- (void)appRegistry:(id)arg1 installStatusChangedForApp:(id)arg2;
- (void)removeObservers;
- (void)addObservers;

@end
