/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSArray, NSNumber;

@interface SAAbstractItemList : SADomainObject

@property (copy, nonatomic) NSArray *domainObjects;
@property (copy, nonatomic) NSNumber *selectedIndex;

+ (id)abstractItemList;
+ (id)abstractItemListWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
