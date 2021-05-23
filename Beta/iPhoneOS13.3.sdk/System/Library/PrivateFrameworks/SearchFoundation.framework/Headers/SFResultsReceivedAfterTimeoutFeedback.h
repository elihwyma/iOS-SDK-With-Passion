/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@class NSArray;

@interface SFResultsReceivedAfterTimeoutFeedback

{
    NSArray *_results;
}

@property (copy, nonatomic) NSArray *results;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResults:(id)arg1;

@end
