/*
 Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

#import <SAML/SAMLBaseElement.h>

@class NSArray, NSDate, NSNumber;

__attribute__((visibility("hidden")))
@interface SAMLConditions : SAMLBaseElement

{
    NSArray *_conditions;
}

@property (nonatomic, readonly) NSDate *notBefore;
@property (nonatomic, readonly) NSDate *notOnOrAfter;
@property (nonatomic, readonly) NSArray *conditions;
@property (nonatomic, readonly) NSArray *audienceRestrictions;
@property (nonatomic, readonly) _Bool oneTimeUse;
@property (nonatomic, readonly) NSArray *proxyRestrictions;
@property (nonatomic, readonly) NSNumber *proxyRestrictionAudienceCount;

+ (id)createElement:(id *)arg1;

- (_Bool)assertionMeetsConditions:(id *)arg1;

@end
