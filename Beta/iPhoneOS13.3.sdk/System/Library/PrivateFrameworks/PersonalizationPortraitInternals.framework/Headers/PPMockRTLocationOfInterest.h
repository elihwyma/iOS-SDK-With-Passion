/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class PPMockRTMapItem;

@interface PPMockRTLocationOfInterest : NSObject

{
    PPMockRTMapItem *_mapItem;
    long long _type;
}

@property (retain, nonatomic) PPMockRTMapItem *mapItem;
@property (nonatomic, readonly) long long type;

+ (id)mockLocationOfInterestWithSubThoroughfare:(id)arg1 thoroughfare:(id)arg2 subLocality:(id)arg3 locality:(id)arg4 administrativeArea:(id)arg5 administrativeAreaCode:(id)arg6 postalCode:(id)arg7 country:(id)arg8 countryCode:(id)arg9 longitude:(double)arg10 latitude:(double)arg11;

@end
