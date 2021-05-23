/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SASButtonIdentifierTransport : NSObject

{
    NSString *_identifier;
}

@property (retain, nonatomic) NSString *identifier;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (long long)siriButtonIdentifier;
- (id)initWithSiriButtonIdentifier:(long long)arg1;
- (_Bool)_identifierMatchesSiriButtonIdentifier:(long long)arg1;

@end
