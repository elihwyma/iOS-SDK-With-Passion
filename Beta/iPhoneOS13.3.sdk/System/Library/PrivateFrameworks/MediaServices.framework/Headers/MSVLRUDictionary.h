/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <Foundation/NSObject.h>

@class MSVLRUDictionaryNode, NSMutableDictionary;

@protocol MSVLRUDictionaryDelegate;

@interface MSVLRUDictionary : NSObject

{
    id <MSVLRUDictionaryDelegate> _delegate;
    long long _maximumCapacity;
    NSMutableDictionary *_dictionary;
    MSVLRUDictionaryNode *_head;
    MSVLRUDictionaryNode *_tail;
    long long _transactionCount;
}

@property (retain, nonatomic) NSMutableDictionary *dictionary;
@property (retain, nonatomic) MSVLRUDictionaryNode *head;
@property (retain, nonatomic) MSVLRUDictionaryNode *tail;
@property (nonatomic) long long transactionCount;
@property (weak, nonatomic) id <MSVLRUDictionaryDelegate> delegate;
@property (nonatomic) long long maximumCapacity;
@property (nonatomic, readonly) long long count;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)allKeys;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)allValues;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)beginTransaction;
- (void)endTransaction;
- (void)_removeNodeFromLinkedList:(id)arg1;
- (void)_addNodeToFront:(id)arg1;
- (void)_removeNode:(id)arg1;
- (void)_moveNodeToFront:(id)arg1;
- (id)initWithMaximumCapacity:(unsigned long long)arg1;
- (id)peekObjectForKey:(id)arg1;
- (void)performTransaction:(CDUnknownBlockType)arg1;
- (void)_shrinkToCapacity;
- (void)pokeKey:(id)arg1;

@end
