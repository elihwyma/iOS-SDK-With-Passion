//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class HKAxisLabelStyle, NSString;

@interface HKLegendPointAnnotationStyle : NSObject <NSCopying>
{
    BOOL _leftOfSeries;
    HKAxisLabelStyle *_labelStyle;
    NSString *_localizedLabelKey;
}

+ (id)annotationStyleWithLabelStyle:(id)arg1 localizedLabelKey:(id)arg2 leftOfSeries:(BOOL)arg3;
@property(nonatomic) BOOL leftOfSeries; // @synthesize leftOfSeries=_leftOfSeries;
@property(copy, nonatomic) NSString *localizedLabelKey; // @synthesize localizedLabelKey=_localizedLabelKey;
@property(copy, nonatomic) HKAxisLabelStyle *labelStyle; // @synthesize labelStyle=_labelStyle;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;

@end

