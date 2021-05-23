/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface SiriPresentationIdentifierTransport : NSObject

{
    NSNumber *_identifier;
}

@property (retain, nonatomic) NSNumber *identifier;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSiriPresentationIdentifier:(long long)arg1;
- (long long)siriPresentationIdentifier;

@end
