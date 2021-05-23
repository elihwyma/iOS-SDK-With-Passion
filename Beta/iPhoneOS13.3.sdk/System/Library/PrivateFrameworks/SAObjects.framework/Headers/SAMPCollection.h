/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAMPMediaEntity.h>

@class NSArray;

@interface SAMPCollection : SAMPMediaEntity

@property (nonatomic) _Bool editable;
@property (copy, nonatomic) NSArray *items;

+ (id)collection;
+ (id)collectionWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
