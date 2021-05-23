/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSString, NSUUID;

@interface HFStateRestorationSettings : NSObject

{
    int _notifyRegistrationToken;
    NSHashTable *_observers;
}

@property (nonatomic, readonly) int notifyRegistrationToken;
@property (nonatomic, readonly) NSHashTable *observers;
@property (copy, nonatomic) NSUUID *selectedHomeIdentifier;
@property (copy, nonatomic, readonly) NSUUID *selectedRoomIdentifierForSelectedHome;
@property (copy, nonatomic) NSString *selectedHomeAppTabIdentifier;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)selectedRoomIdentifierForHomeIdentifier:(id)arg1;
- (void)saveSelectedRoomIdentifier:(id)arg1 forHomeIdentifier:(id)arg2;
- (void)_selectedHomeDidChange;
- (id)_roomKeyForHomeIdentifier:(id)arg1;
- (id)_homeAppPreferencesValueForKey:(id)arg1 ofClass:(Class)arg2;
- (void)_setHomeAppPreferencesValue:(id)arg1 forKey:(id)arg2;
- (void)syncToNanoPrefs;

@end
