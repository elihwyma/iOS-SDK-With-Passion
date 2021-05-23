/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSData, NSDictionary, NSString;

@interface SAParsecContext : SADomainObject

@property (copy, nonatomic) NSData *httpBody;
@property (copy, nonatomic) NSDictionary *httpHeaders;
@property (copy, nonatomic) NSString *httpMethod;
@property (copy, nonatomic) NSString *httpUrl;

+ (id)parsecContext;
+ (id)parsecContextWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
