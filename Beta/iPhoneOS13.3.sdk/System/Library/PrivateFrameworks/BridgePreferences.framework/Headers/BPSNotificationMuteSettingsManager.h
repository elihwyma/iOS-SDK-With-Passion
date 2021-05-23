/*
 Image: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
 */

#import <Foundation/NSObject.h>

@class NPSManager, NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface BPSNotificationMuteSettingsManager : NSObject

{
    NSMutableDictionary *_mutedSectionIdentifiersForDay;
    NPSManager *_npsManager;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedNotificationMuteSettingsManager;

- (id)init;
- (void)dealloc;
- (void)_loadMutedSectionIdentifiers;
- (void)_updateObservers;
- (id)mutedForTodaySectionIdentifiers;
- (void)_queue_sync;
- (_Bool)isMutedForTodaySectionIdentifier:(id)arg1;
- (void)addSectionIdentifiers:(id)arg1;
- (void)removeSectionIdentifiers:(id)arg1;

@end
