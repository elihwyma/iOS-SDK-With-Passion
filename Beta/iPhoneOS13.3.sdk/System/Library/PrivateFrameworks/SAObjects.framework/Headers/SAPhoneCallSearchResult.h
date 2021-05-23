/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSDate, NSNumber, SAPersonAttribute;

@interface SAPhoneCallSearchResult : SADomainObject

@property (copy, nonatomic) NSDate *callTime;
@property (retain, nonatomic) SAPersonAttribute *contact;
@property (copy, nonatomic) NSNumber *isNew;

+ (id)callSearchResult;
+ (id)callSearchResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
