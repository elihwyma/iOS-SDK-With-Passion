/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSMapTable, _UISelectorSet;

__attribute__((visibility("hidden")))
@interface _UISelectorDictionary : NSObject <Swift>

{
    NSMapTable *_map;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) _UISelectorSet *allSelectors;
@property (nonatomic, readonly) NSArray *allObjects;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addEntriesFromDictionary:(id)arg1;
- (id)initWithMap:(id)arg1;
- (void)enumerateSelectorsAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)setObject:(id)arg1 forSelector:(SEL)arg2;
- (void)removeObjectForSelector:(SEL)arg1;
- (id)initWithMapping:(CDUnknownBlockType)arg1 objects:(id)arg2;
- (id)objectForSelector:(SEL)arg1;
- (void)removeObjectsForSelectors:(id)arg1;

@end
