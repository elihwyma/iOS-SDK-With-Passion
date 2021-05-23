/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, WFAccountAccessResource;

@interface WFWunderlistListPickerParameter : WFEnumerationParameter

{
    _Bool _hasLoadedLists;
    NSArray *_possibleStates;
    WFAccountAccessResource *_accessResource;
}

@property (nonatomic) _Bool hasLoadedLists;
@property (weak, nonatomic) WFAccountAccessResource *accessResource;

- (void)dealloc;
- (id)possibleStates;
- (id)lists;
- (void)setLists:(id)arg1;
- (id)localizedLabelForPossibleState:(id)arg1;
- (void)wasAddedToWorkflow;
- (id)defaultSerializedRepresentation;
- (void)fetchListsIfNeeded;
- (void)loadListsFromCache;
- (id)listNamed:(id)arg1;

@end
