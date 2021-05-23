/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class GKLinkedList, NSMutableDictionary, NSString;

@interface GKCache : NSObject

{
    NSMutableDictionary *_dictionary;
    GKLinkedList *_cacheList;
    unsigned long long _maxCount;
    unsigned long long _count;
}

@property (retain, nonatomic) NSMutableDictionary *dictionary;
@property (retain, nonatomic) GKLinkedList *cacheList;
@property (nonatomic) unsigned long long maxCount;
@property (nonatomic) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)initWithMaxCount:(unsigned long long)arg1;

@end
