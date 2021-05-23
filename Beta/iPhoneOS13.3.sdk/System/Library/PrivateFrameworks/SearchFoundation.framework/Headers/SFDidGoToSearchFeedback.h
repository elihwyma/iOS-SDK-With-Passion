/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@class NSString;

@interface SFDidGoToSearchFeedback

{
    NSString *_input;
    unsigned long long _endpoint;
}

@property (copy, nonatomic) NSString *input;
@property (nonatomic) unsigned long long endpoint;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInput:(id)arg1 endpoint:(unsigned long long)arg2;

@end
