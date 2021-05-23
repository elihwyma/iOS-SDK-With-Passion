/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RETextContentProvider.h>

@class NSDate, NSTimeZone;

@interface REDateContentProvider : RETextContentProvider

{
    NSDate *_date;
    unsigned long long _units;
    NSTimeZone *_timeZone;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) unsigned long long units;
@property (nonatomic, readonly) NSTimeZone *timeZone;

+ (id)dateContentProviderWithDate:(id)arg1 units:(unsigned long long)arg2 timeZone:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)attributedStringRepresentation;
- (id)clockKitTextProviderRepresentation;
- (id)initWithDate:(id)arg1 units:(unsigned long long)arg2 timeZone:(id)arg3;

@end
