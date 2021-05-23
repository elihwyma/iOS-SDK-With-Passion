/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NPSManager;

@protocol OS_dispatch_queue;

@interface NTKTimeTravelSettings : NSObject

{
    NPSManager *_npsManager;
    _Bool _timeTravelEnabled;
    NSObject<OS_dispatch_queue> *_prefsQueue;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (_Bool)_isTimeTravelEnabledInPreferences;
- (void)_handlePrefsChanged;
- (_Bool)isTimeTravelEnabled;
- (void)setTimeTravelEnabled:(_Bool)arg1;

@end
