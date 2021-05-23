/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, WFAppleMusicAccessResource, WFPlaylistSubstitutableState;

@interface WFPlaylistPickerParameter : WFEnumerationParameter

{
    _Bool _showLibrary;
    _Bool _generatingNotifications;
    NSArray *_possibleStates;
    WFPlaylistSubstitutableState *_entireLibraryState;
    WFAppleMusicAccessResource *_appleMusicAccessResource;
}

@property (nonatomic, readonly) _Bool showLibrary;
@property (nonatomic, readonly) NSArray *possibleStates;
@property (retain, nonatomic) WFPlaylistSubstitutableState *entireLibraryState;
@property (nonatomic) _Bool generatingNotifications;
@property (retain, nonatomic) WFAppleMusicAccessResource *appleMusicAccessResource;

+ (id)referencedActionResourceClasses;
+ (_Bool)hasPlaylistAccess;

- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;
- (id)localizedLabelForPossibleState:(id)arg1;
- (void)possibleStatesDidChange;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;
- (id)defaultSerializedRepresentation;
- (void)setActionResources:(id)arg1;
- (void)authorizationStatusDidChange;
- (void)updateChangeNotificationRegistration;

@end
