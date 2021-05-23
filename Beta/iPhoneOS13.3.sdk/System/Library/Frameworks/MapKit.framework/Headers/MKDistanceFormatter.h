/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSFormatter.h>

@class NSLocale;

@interface MKDistanceFormatter : NSFormatter

{
    NSLocale *_locale;
    unsigned long long _units;
    unsigned long long _unitStyle;
}

@property (copy, nonatomic) NSLocale *locale;
@property (nonatomic) unsigned long long units;
@property (nonatomic) unsigned long long unitStyle;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (_Bool)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (_Bool)isPartialStringValid:(id *)arg1 proposedSelectedRange:(struct _NSRange *)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange)arg4 errorDescription:(id *)arg5;
- (id)stringFromDistance:(double)arg1;
- (_Bool)_useMetric;
- (double)distanceFromString:(id)arg1;

@end
