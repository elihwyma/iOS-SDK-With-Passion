/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIView.h>

@class NSDictionary, NSMapTable, NSMutableArray, NSMutableDictionary, NSNumberFormatter, NSString;

__attribute__((visibility("hidden")))
@interface _MKScaleUnitsView : UIView

{
    _Bool _useLightText;
    double _segmentLengthInPixels;
    double _unitsWidth;
    double _justUnitsWidth;
    NSDictionary *_legendAttributes;
    NSMutableArray *_strings;
    NSString *_legendBaseString;
    NSString *_unitsString;
    NSString *_unpaddedUnitsString;
    NSMapTable *_legendStringWidthCache;
    NSMutableDictionary *_legendStringForDistanceStringCache;
    NSNumberFormatter *_floatNumberFormatter;
    _Bool _RTL;
}

@property (nonatomic, getter=isRTL) _Bool RTL;
@property (nonatomic) _Bool useLightText;
@property (nonatomic) double segmentLengthInPixels;
@property (nonatomic, readonly) double unitsWidth;
@property (retain, nonatomic) NSString *legendBaseString;
@property (retain, nonatomic) NSString *unitsString;
@property (copy, nonatomic) NSString *unpaddedUnitsString;
@property (retain, nonatomic) NSNumberFormatter *floatNumberFormatter;

- (id)init;
- (void)setUnits:(id)arg1;
- (void)clearCaches:(id)arg1;
- (double)_widthForString:(id)arg1 attributes:(id)arg2;
- (void)_calculateLegend:(_Bool)arg1;
- (id)_legendStringForDistanceString:(id)arg1 appendUnits:(_Bool)arg2 index:(int)arg3;
- (id)_uncachedLegendStringsForDistanceString:(id)arg1;
- (_Bool)canDisplaySegment:(unsigned long long)arg1;

@end
