/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RETextContentProvider.h>

@class NSDate, NSTimeZone;

@interface RETimeContentProvider : RETextContentProvider

{
    NSDate *_date;
    NSTimeZone *_timeZone;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSTimeZone *timeZone;

+ (id)timeContentProviderWithDate:(id)arg1 timeZone:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 timeZone:(id)arg2;
- (id)attributedStringRepresentation;
- (id)clockKitTextProviderRepresentation;

@end
