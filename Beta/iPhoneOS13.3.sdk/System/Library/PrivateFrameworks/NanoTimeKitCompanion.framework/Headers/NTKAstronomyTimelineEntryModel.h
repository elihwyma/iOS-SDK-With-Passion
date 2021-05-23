/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@class CLLocation, NSDate;

@interface NTKAstronomyTimelineEntryModel : NTKTimelineEntryModel

{
    unsigned long long _vista;
    NSDate *_currentDate;
    CLLocation *_currentLocation;
    CLLocation *_anyLocation;
}

@property (nonatomic, readonly) unsigned long long vista;
@property (nonatomic, readonly) NSDate *currentDate;
@property (nonatomic, readonly) CLLocation *currentLocation;
@property (nonatomic, readonly) CLLocation *anyLocation;

- (id)templateForComplicationFamily:(long long)arg1;
- (id)initWithVista:(unsigned long long)arg1 entryDate:(id)arg2 currentDate:(id)arg3 currentLocation:(id)arg4 anyLocation:(id)arg5;

@end
