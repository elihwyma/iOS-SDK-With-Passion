/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NPSManager;

@interface NTKCustomWorldCityAbbreviationsStore : NSObject

{
    NPSManager *_npsManager;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_handlePrefsChanged;
- (void)_notifyClientsOfChange;
- (id)customAbbreviations;
- (id)_getCustomAbbreviationsFromPrefs;
- (void)setCustomAbbreviation:(id)arg1 forCityIdentifier:(id)arg2;

@end
