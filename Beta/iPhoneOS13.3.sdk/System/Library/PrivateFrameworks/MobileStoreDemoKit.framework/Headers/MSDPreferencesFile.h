/*
 Image: /System/Library/PrivateFrameworks/MobileStoreDemoKit.framework/MobileStoreDemoKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface MSDPreferencesFile : NSObject

{
    NSMutableDictionary *_cache;
}

@property (retain) NSMutableDictionary *cache;

+ (id)sharedInstance;
+ (id)preferencesFileUrl;
+ (id)preferencesFilePath;
+ (_Bool)preferencesFileExists;

- (id)init;
- (id)objectForKey:(id)arg1;
- (_Bool)removeObjectForKey:(id)arg1;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2;
- (_Bool)removeObjectsForKeys:(id)arg1;
- (void)populateCache;
- (void)raiseInvalidPropertyListObjectExceptionForObject:(id)arg1;
- (_Bool)saveCache;

@end
