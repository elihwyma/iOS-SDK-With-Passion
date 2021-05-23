/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@class NSData, NSDictionary;

@interface SFCustomFeedback

{
    unsigned long long _feedbackType;
    NSDictionary *_jsonFeedback;
    NSData *_data;
}

@property (nonatomic) unsigned long long feedbackType;
@property (copy, nonatomic) NSDictionary *jsonFeedback;
@property (copy, nonatomic) NSData *data;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 jsonFeedback:(id)arg2;
- (id)initWithType:(unsigned long long)arg1 data:(id)arg2;

@end
