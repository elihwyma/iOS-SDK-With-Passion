/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ChartLabelInfo : NSObject

{
    NSString *_string;
    struct CGSize _size;
    double _position;
    _Bool _immutable;
}

@property (retain, nonatomic) NSString *string;
@property (nonatomic) struct CGSize size;
@property (nonatomic) double position;
@property (nonatomic, readonly) _Bool immutable;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setImmutable:(_Bool)arg1;
- (void)setStringToYearWithDate:(id)arg1 timeZone:(id)arg2;
- (void)retainStringAndSizeFromLabelInfo:(id)arg1;
- (void)setStringToMonthAndDayWithDate:(id)arg1 timeZone:(id)arg2;

@end
