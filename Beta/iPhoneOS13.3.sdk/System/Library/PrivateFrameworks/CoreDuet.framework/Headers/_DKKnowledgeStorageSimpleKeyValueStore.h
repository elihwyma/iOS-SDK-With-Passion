/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

#import <CoreDuet/Swift-Protocol.h>

@class NSString, _DKKnowledgeStorage;

@interface _DKKnowledgeStorageSimpleKeyValueStore : NSObject <Swift>

{
    _DKKnowledgeStorage *_storage;
    NSString *_domain;
}

@property (nonatomic, readonly) _DKKnowledgeStorage *storage;
@property (nonatomic, readonly) NSString *domain;

- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithStorage:(id)arg1 domain:(id)arg2;

@end
