/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SASmsGroupName : SADomainObject

@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *groupNameId;

+ (id)groupName;
+ (id)groupNameWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
