/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
 */

#import <Foundation/NSObject.h>

@class NSString, VOSCommandProfile;

@protocol OS_dispatch_queue;

@interface VOSCommandManager : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    VOSCommandProfile *_activeProfile;
    NSString *_siriShortCutToken;
}

@property (nonatomic, readonly) VOSCommandProfile *activeProfile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)_commonInit;
- (void)reloadWithSystemProfile;
- (void)reloadPreferringUserProfile;
- (id)initPreferringUserProfile;
- (void)_loadSystemProfile;
- (void)saveAsUserProfile;
- (_Bool)addGesture:(id)arg1 toCommand:(id)arg2 withResolver:(id)arg3;
- (_Bool)removeGesture:(id)arg1 fromCommand:(id)arg2 withResolver:(id)arg3;
- (_Bool)addKeyChord:(id)arg1 toCommand:(id)arg2 withResolver:(id)arg3;
- (_Bool)removeKeyChord:(id)arg1 fromCommand:(id)arg2 withResolver:(id)arg3;
- (id)validateCanAddGesture:(id)arg1 toCommand:(id)arg2 withResolver:(id)arg3;
- (id)validateCanRemoveGesture:(id)arg1 fromCommand:(id)arg2 withResolver:(id)arg3;
- (id)validateCanAddKeyChord:(id)arg1 toCommand:(id)arg2 withResolver:(id)arg3;
- (id)validateCanRemoveKeyChord:(id)arg1 fromCommand:(id)arg2 withResolver:(id)arg3;
- (id)commandForTouchGesture:(id)arg1 withResolver:(id)arg2;
- (id)commandForKeyChord:(id)arg1 withResolver:(id)arg2;
- (id)allCommandsWithResolver:(id)arg1;
- (id)allSiriShortcutCommandsWithResolver:(id)arg1;
- (id)allShortcutBindingsWithResolver:(id)arg1;
- (id)userPresentableAllShortcutBindingsWithResolver:(id)arg1;
- (id)gestureBindingsForCommand:(id)arg1 withResolver:(id)arg2;
- (id)shortcutBindingsForCommand:(id)arg1 withResolver:(id)arg2;
- (_Bool)commandHasAnyBindings:(id)arg1 withResolver:(id)arg2;
- (unsigned long long)availabilityForGesture:(id)arg1 withResolver:(id)arg2;
- (unsigned long long)availabilityForShortcut:(id)arg1 withResolver:(id)arg2;
- (unsigned long long)availabilityForCommand:(id)arg1 withResolver:(id)arg2;
- (_Bool)commandHasModifiedBindingsWhenZoomEnabled:(id)arg1 withResolver:(id)arg2;
- (id)availableSiriShortcuts:(id)arg1;
- (id)initWithSystemProfile;
- (void)restoreDefaultProfile;
- (void)batchUpdateActiveProfile:(CDUnknownBlockType)arg1 saveIfSuccessful:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

@end
