/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class NSString, NSURL;

@interface INTermsAndConditions : NSObject <Swift>

{
    NSString *_localizedTermsAndConditionsText;
    NSURL *_privacyPolicyURL;
    NSURL *_termsAndConditionsURL;
}

@property (nonatomic, readonly) NSString *localizedTermsAndConditionsText;
@property (nonatomic, readonly) NSURL *privacyPolicyURL;
@property (nonatomic, readonly) NSURL *termsAndConditionsURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)initWithLocalizedTermsAndConditionsText:(id)arg1 privacyPolicyURL:(id)arg2 termsAndConditionsURL:(id)arg3;

@end
