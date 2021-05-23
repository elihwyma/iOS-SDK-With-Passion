/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class ML3MusicLibrary, NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface ML3AccountCacheDatabase : NSObject

{
    NSMutableDictionary *_propertiesCache;
    NSObject<OS_dispatch_queue> *accessQueue;
    ML3MusicLibrary *_library;
}

- (id)initWithLibrary:(id)arg1;
- (_Bool)setAppleID:(id)arg1 forDSID:(unsigned long long)arg2;
- (_Bool)setAppleID:(id)arg1 altDSID:(id)arg2 forDSID:(unsigned long long)arg3;
- (id)_cacheEntryForDSID:(unsigned long long)arg1;
- (void)_setCacheEntry:(id)arg1 forDSID:(unsigned long long)arg2;
- (_Bool)getPropertiesForDSID:(unsigned long long)arg1 appleID:(id *)arg2 altDSID:(id *)arg3;
- (id)appleIDForDSID:(unsigned long long)arg1;

@end
