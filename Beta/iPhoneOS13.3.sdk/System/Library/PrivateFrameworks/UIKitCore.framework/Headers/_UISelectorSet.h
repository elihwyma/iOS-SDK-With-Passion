/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSHashTable;

__attribute__((visibility("hidden")))
@interface _UISelectorSet : NSObject <Swift>

{
    NSHashTable *_hash;
}

@property (nonatomic, readonly) unsigned long long count;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)intersectSet:(id)arg1;
- (void)minusSet:(id)arg1;
- (void)unionSet:(id)arg1;
- (_Bool)intersectsSet:(id)arg1;
- (void)addSelector:(SEL)arg1;
- (void)enumerateSelectorsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithHash:(id)arg1;
- (id)initWithSelectors:(SEL)arg1;
- (_Bool)containsSelector:(SEL)arg1;
- (void)removeSelector:(SEL)arg1;
- (_Bool)containsSet:(id)arg1;

@end
