/*
 Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

#import <SAML/SAMLBaseElement.h>

@class NSDate, NSString, SAMLNameId;

__attribute__((visibility("hidden")))
@interface SAMLSubjectConfirmation : SAMLBaseElement

@property (nonatomic, readonly) NSString *method;
@property (nonatomic, readonly) SAMLNameId *nameId;
@property (nonatomic, readonly) NSDate *notBefore;
@property (nonatomic, readonly) NSDate *notOnOrAfter;
@property (nonatomic, readonly) NSString *recipient;
@property (nonatomic, readonly) NSString *inResponseTo;
@property (nonatomic, readonly) NSString *address;

+ (id)createElement:(id *)arg1;

- (struct _xmlNode *)xmlNode:(id *)arg1;

@end
