/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSString, SAPersonAttribute;

@interface SAPhoneIncomingCallSearchResult : SADomainObject

@property (retain, nonatomic) SAPersonAttribute *caller;
@property (copy, nonatomic) NSString *incomingCallType;

+ (id)incomingCallSearchResult;
+ (id)incomingCallSearchResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
