/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@interface PSSystemConfigurationDynamicStoreNETRBWatcher : NSObject

{
    struct __CFRunLoopSource *_scRunLoopSource;
    struct __SCDynamicStore *_scDynamicStore;
    int _netrbState;
    int _netrbReason;
}

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void)readNETRBState:(int *)arg1 andReason:(int *)arg2;
- (void)getNETRBState:(int *)arg1 andReason:(int *)arg2;
- (void)sendStateUpdate;
- (_Bool)shouldShowTethering;
- (_Bool)isTetheringEnabled;
- (_Bool)isDataEnabled;

@end
