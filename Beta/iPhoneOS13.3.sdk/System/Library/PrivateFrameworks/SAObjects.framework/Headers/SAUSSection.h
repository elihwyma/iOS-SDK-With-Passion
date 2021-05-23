/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSArray, NSString, SAUIAppPunchOut;

@interface SAUSSection : SADomainObject

@property (copy, nonatomic) NSArray *cardResults;
@property (copy, nonatomic) NSArray *genericResults;
@property (retain, nonatomic) SAUIAppPunchOut *punchOut;
@property (copy, nonatomic) NSString *sectionTitle;

+ (id)section;
+ (id)sectionWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
