/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@protocol TIUserModelDataStoring;

@interface TIUserModel : NSObject

{
    NSString *_inputMode;
    id <TIUserModelDataStoring> _userModelStore;
    NSMutableDictionary *_durableCounters;
    NSMutableDictionary *_userModelValuesCollection;
    NSMutableDictionary *_settingsDictionary;
    _Bool _isLoaded;
    double _timeOfLastPersist;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *keys;

- (void)dealloc;
- (void)loadSettings;
- (void)sessionDidEnd:(id)arg1 aligned:(id)arg2;
- (_Bool)persistForDate:(id)arg1;
- (id)valuesForKey:(id)arg1;
- (void)addToDurableCounter:(int)arg1 forKey:(id)arg2;
- (void)addToTransientCounter:(int)arg1 forKey:(id)arg2 andCandidateLength:(int)arg3 andContext:(id)arg4;
- (void)addNumberToTransientCounter:(id)arg1 forKey:(id)arg2 andCandidateLength:(int)arg3 andContext:(id)arg4;
- (void)configureDurableCounterForName:(id)arg1;
- (void)configureDurableCounters;
- (id)initWithInputMode:(id)arg1 userModelDataStore:(id)arg2;
- (void)doLoad;
- (id)populateSettingsDictionary;
- (id)dictForPowerLog;
- (id)getValues:(id)arg1;
- (int)valueForDurableKey:(id)arg1;

@end
