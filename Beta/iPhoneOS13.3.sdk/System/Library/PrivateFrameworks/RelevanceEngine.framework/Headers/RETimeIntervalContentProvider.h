/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RETextContentProvider.h>

@class NSDate, NSTimeZone;

@interface RETimeIntervalContentProvider : RETextContentProvider

{
    NSDate *_startDate;
    NSDate *_endDate;
    NSTimeZone *_timeZone;
}

@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSTimeZone *timeZone;

+ (id)timeIntervalContentProviderWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)attributedStringRepresentation;
- (id)clockKitTextProviderRepresentation;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3;

@end
