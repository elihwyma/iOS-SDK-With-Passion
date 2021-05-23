/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, WFAccountAccessResource;

@interface WFTodoistProjectPickerParameter : WFEnumerationParameter

{
    _Bool _hasLoadedProjects;
    NSArray *_possibleStates;
    WFAccountAccessResource *_accessResource;
}

@property (nonatomic) _Bool hasLoadedProjects;
@property (weak, nonatomic) WFAccountAccessResource *accessResource;

- (void)dealloc;
- (id)possibleStates;
- (void)setProjects:(id)arg1;
- (id)projects;
- (id)localizedLabelForPossibleState:(id)arg1;
- (void)wasAddedToWorkflow;
- (void)fetchProjectsIfNeeded;
- (void)loadProjectsFromCache;
- (id)projectNamed:(id)arg1;

@end
