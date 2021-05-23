/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class SAUIAppPunchOut;

@interface SAUSCardSection : SADomainObject

@property (retain, nonatomic) SAUIAppPunchOut *punchOut;

+ (id)cardSection;
+ (id)cardSectionWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
