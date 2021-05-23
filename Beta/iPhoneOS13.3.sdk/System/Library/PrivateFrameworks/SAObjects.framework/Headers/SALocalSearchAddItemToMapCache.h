/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class SALocalSearchMapItem;

@interface SALocalSearchAddItemToMapCache : SADomainCommand

@property (retain, nonatomic) SALocalSearchMapItem *mapItem;

+ (id)addItemToMapCache;
+ (id)addItemToMapCacheWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
