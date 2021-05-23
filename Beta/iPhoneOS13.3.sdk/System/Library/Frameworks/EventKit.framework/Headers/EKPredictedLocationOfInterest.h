/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@class NSString, RTPredictedLocationOfInterest;

__attribute__((visibility("hidden")))
@interface EKPredictedLocationOfInterest : NSObject

{
    long long _type;
    NSString *_customLabel;
    NSString *_mapItemName;
    NSString *_addressCountryCode;
    NSString *_addressThoroughfare;
    NSString *_addressLocality;
    RTPredictedLocationOfInterest *_rtPredictedLocationOfInterest;
}

@property (nonatomic, readonly) RTPredictedLocationOfInterest *rtPredictedLocationOfInterest;
@property (nonatomic, readonly) long long type;
@property (copy, nonatomic, readonly) NSString *customLabel;
@property (copy, nonatomic, readonly) NSString *mapItemName;
@property (copy, nonatomic, readonly) NSString *addressCountryCode;
@property (copy, nonatomic, readonly) NSString *addressThoroughfare;
@property (copy, nonatomic, readonly) NSString *addressLocality;

- (id)initWithType:(long long)arg1 customLabel:(id)arg2 mapItemName:(id)arg3 addressCountryCode:(id)arg4 addressThoroughFare:(id)arg5 addressLocality:(id)arg6;
- (id)initWithPredictedLocationOfInterest:(id)arg1;

@end
