/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE, NSString, NTKSiderealSolarEvent;

@interface NTKSiderealSector : NSObject

{
    NSString *_localizedName;
    unsigned long long _type;
    NTKSiderealSolarEvent *_startingEvent;
    NTKSiderealSolarEvent *_endingEvent;
    MISSING_TYPE *_gradientStartPoint;
    MISSING_TYPE *_gradientEndPoint;
}

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NTKSiderealSolarEvent *startingEvent;
@property (retain, nonatomic) NTKSiderealSolarEvent *endingEvent;
@property (nonatomic) MISSING_TYPE *gradientStartPoint;
@property (nonatomic) MISSING_TYPE *gradientEndPoint;

- (id)description;
- (id)localizedName;
- (id)initWithStartingEvent:(id)arg1 endingEvent:(id)arg2;

@end
