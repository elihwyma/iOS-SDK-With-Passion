/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSArray;

@interface SACarPlaySupportedOEMAppIdList : SADomainObject

@property (copy, nonatomic) NSArray *appIds;

+ (id)carPlaySupportedOEMAppIdList;
+ (id)carPlaySupportedOEMAppIdListWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
