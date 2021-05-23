/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@class SFSearchResult;

@interface SFResultFeedback

{
    SFSearchResult *_result;
}

@property (retain, nonatomic) SFSearchResult *result;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResult:(id)arg1;

@end
