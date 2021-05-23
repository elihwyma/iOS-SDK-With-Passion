/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@class NSString;

@interface SFClientTimingFeedback

{
    NSString *_input;
    NSString *_eventName;
    unsigned long long _nanosecondInterval;
}

@property (copy, nonatomic) NSString *input;
@property (copy, nonatomic) NSString *eventName;
@property unsigned long long nanosecondInterval;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvent:(id)arg1 timeInterval:(unsigned long long)arg2 queryId:(unsigned long long)arg3;

@end
