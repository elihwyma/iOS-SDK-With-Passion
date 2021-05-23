/*
 Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <Foundation/NSObject.h>

#import <Accounts/Swift-Protocol.h>

@class NSMutableDictionary, NSMutableSet;

@interface ACTrackedSet : NSObject <Swift>

{
    NSMutableSet *_underlyingSet;
    NSMutableDictionary *_changesDictionary;
}

@property (readonly) unsigned long long count;

+ (_Bool)supportsSecureCoding;
+ (id)set;
+ (id)setWithSet:(id)arg1;
+ (id)setWithArray:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (id)member:(id)arg1;
- (id)objectEnumerator;
- (id)initWithArray:(id)arg1;
- (_Bool)containsObject:(id)arg1;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)allObjects;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithSet:(id)arg1;
- (id)anyObject;
- (void)enumerateModificationsUsingBlock:(CDUnknownBlockType)arg1;
- (id)_initWithEnumerable:(id)arg1 count:(unsigned long long)arg2;
- (void)enumerateModificationsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_initWithUnderlyingSet:(id)arg1 changesDictionary:(id)arg2;
- (_Bool)isEqualToTrackedSet:(id)arg1;
- (id)allModifications;

@end
