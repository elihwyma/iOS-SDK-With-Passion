/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RESingleton.h>

@class NSMutableDictionary;

@protocol _CDUserContext;

@interface REDuetContextStore : RESingleton

{
    id <_CDUserContext> _context;
    NSMutableDictionary *_registrations;
}

- (id)_init;
- (id)isConnectedToCarQuery;
- (id)isConnectedToAudioBluetoothDeviceQuery;
- (void)registerForQuery:(id)arg1 updateBlock:(CDUnknownBlockType)arg2;
- (void)unregisterForQuery:(id)arg1;

@end
