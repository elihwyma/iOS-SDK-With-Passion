/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class NSMutableDictionary;

@interface _IDSDeviceConnectionActiveMap : NSObject

{
    NSMutableDictionary *_activeConnectionMap;
    struct os_unfair_lock_s _writeLock;
}

+ (id)sharedInstance;

- (id)init;
- (void)setActiveConnection:(id)arg1 forKey:(id)arg2;
- (_Bool)hasActiveConnection:(id)arg1 forKey:(id)arg2;
- (void)removeActiveConnection:(id)arg1 forKey:(id)arg2;

@end
