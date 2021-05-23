/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RETextContentProvider.h>

@class NSDate;

@interface RERelativeDateContentProvider : RETextContentProvider

{
    NSDate *_date;
    long long _style;
    unsigned long long _units;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) long long style;
@property (nonatomic, readonly) unsigned long long units;

+ (id)relativeDateContentProviderWithDate:(id)arg1 style:(long long)arg2 units:(unsigned long long)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)attributedStringRepresentation;
- (id)clockKitTextProviderRepresentation;
- (id)initWithDate:(id)arg1 style:(long long)arg2 units:(unsigned long long)arg3;

@end
