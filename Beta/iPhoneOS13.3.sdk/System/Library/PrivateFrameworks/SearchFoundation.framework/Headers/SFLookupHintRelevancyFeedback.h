/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@class NSString;

@interface SFLookupHintRelevancyFeedback

{
    _Bool _discarded;
    NSString *_context;
    NSString *_domain;
    unsigned long long _grade;
    struct _NSRange _hintRange;
}

@property (copy, nonatomic) NSString *context;
@property (nonatomic) struct _NSRange hintRange;
@property (copy, nonatomic) NSString *domain;
@property (nonatomic) _Bool discarded;
@property (nonatomic) unsigned long long grade;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContext:(id)arg1 hintRange:(struct _NSRange)arg2 domain:(id)arg3 discarded:(_Bool)arg4 grade:(unsigned long long)arg5;

@end
