//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PPMockRTMapItem;

@interface PPMockRTLocationOfInterest : NSObject
{
    PPMockRTMapItem *_mapItem;
    long long _type;
}

+ (id)mockLocationOfInterestWithSubThoroughfare:(id)arg1 thoroughfare:(id)arg2 subLocality:(id)arg3 locality:(id)arg4 administrativeArea:(id)arg5 administrativeAreaCode:(id)arg6 postalCode:(id)arg7 country:(id)arg8 countryCode:(id)arg9 longitude:(double)arg10 latitude:(double)arg11;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) PPMockRTMapItem *mapItem; // @synthesize mapItem=_mapItem;
// - (void).cxx_destruct;

@end

