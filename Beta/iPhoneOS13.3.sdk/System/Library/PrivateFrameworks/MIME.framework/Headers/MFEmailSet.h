/*
 Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <EmailAddressing/EAEmailAddressSet.h>

@interface MFEmailSet : EAEmailAddressSet

{
    struct __CFSet *_set;
}

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)member:(id)arg1;
- (id)objectEnumerator;
- (void)addObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)removeAllObjects;
- (void)intersectSet:(id)arg1;
- (void)minusSet:(id)arg1;
- (void)setSet:(id)arg1;
- (void)unionSet:(id)arg1;
- (id)allObjects;
- (id)initWithSet:(id)arg1;
- (_Bool)isEqualToSet:(id)arg1;
- (_Bool)intersectsSet:(id)arg1;
- (_Bool)isSubsetOfSet:(id)arg1;
- (id)serializedRepresentation;
- (id)allCommentedAddresses;
- (void)_setupSetWithCapacity:(unsigned long long)arg1;
- (id)_generateAllObjectsFromSelector:(SEL)arg1;

@end
