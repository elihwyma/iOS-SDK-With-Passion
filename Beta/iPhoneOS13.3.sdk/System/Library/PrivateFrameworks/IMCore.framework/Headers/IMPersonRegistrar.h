/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface IMPersonRegistrar : NSObject

{
    NSMutableDictionary *_personMap;
}

@property (retain) NSMutableDictionary *_personMap;

+ (id)sharedInstance;

- (void)registerPerson:(id)arg1;
- (void)unregisterPerson:(id)arg1;
- (id)personForUniqueID:(id)arg1;
- (void)_dumpAllPersons;

@end
