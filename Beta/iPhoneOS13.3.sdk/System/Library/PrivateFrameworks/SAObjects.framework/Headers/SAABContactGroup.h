/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSString, SASource;

@interface SAABContactGroup : SADomainObject

@property (copy, nonatomic) NSString *groupName;
@property (retain, nonatomic) SASource *groupSource;

+ (id)contactGroup;
+ (id)contactGroupWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
