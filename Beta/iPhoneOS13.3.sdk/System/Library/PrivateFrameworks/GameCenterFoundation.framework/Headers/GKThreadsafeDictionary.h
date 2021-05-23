/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface GKThreadsafeDictionary : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_dictionary;
}

@property (retain, nonatomic) NSMutableDictionary *dictionary;

- (void)dealloc;
- (id)description;
- (id)allKeys;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)allObjects;
- (id)initWithName:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)writeToDictionary:(CDUnknownBlockType)arg1;
- (void)readFromDictionary:(CDUnknownBlockType)arg1;
- (id)objectForKeyWillReplace:(id)arg1 objectProducerBlock:(CDUnknownBlockType)arg2;
- (id)objectForKey:(id)arg1 objectProducerBlock:(CDUnknownBlockType)arg2;
- (id)dictionaryCopy;

@end
