/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CNOrderedDictionary : NSObject

{
    NSMutableDictionary *_dictionary;
    NSMutableArray *_orderedKeys;
}

@property (copy, readonly) NSArray *allKeys;
@property (copy, readonly) NSArray *allObjects;

+ (id)dictionaryWithObject:(id)arg1 forKey:(id)arg2;
+ (id)orderedDictionary;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;

@end
