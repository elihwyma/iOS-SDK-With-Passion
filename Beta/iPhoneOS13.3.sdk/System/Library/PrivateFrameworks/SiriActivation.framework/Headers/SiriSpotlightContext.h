/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <SiriActivation/SiriContext.h>

@class NSString;

@interface SiriSpotlightContext : SiriContext

{
    NSString *_utteranceText;
    long long _source;
}

@property (copy, nonatomic) NSString *utteranceText;
@property (nonatomic) long long source;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
