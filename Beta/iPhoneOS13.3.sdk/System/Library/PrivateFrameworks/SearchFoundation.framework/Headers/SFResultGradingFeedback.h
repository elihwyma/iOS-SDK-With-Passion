/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/SFResultFeedback.h>

@class NSString;

@interface SFResultGradingFeedback : SFResultFeedback

{
    unsigned long long _grade;
    NSString *_textFeedback;
}

@property (nonatomic, readonly) unsigned long long grade;
@property (copy, nonatomic) NSString *textFeedback;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResult:(id)arg1 grade:(unsigned long long)arg2 textFeedback:(id)arg3;
- (id)initWithResult:(id)arg1 grade:(unsigned long long)arg2;

@end
