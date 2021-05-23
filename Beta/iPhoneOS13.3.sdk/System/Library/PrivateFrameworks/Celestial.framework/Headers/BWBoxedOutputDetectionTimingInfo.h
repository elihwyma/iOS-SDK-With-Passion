/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@interface BWBoxedOutputDetectionTimingInfo : NSObject

{
    CDStruct_1b6d18a9 _previousDetectionPTS;
    CDStruct_1b6d18a9 _previousDetectionDuration;
    CDStruct_1b6d18a9 _previousNoDetectionPTS;
    int _lastDetectionCount;
}

@property (nonatomic) CDStruct_1b6d18a9 previousDetectionPTS;
@property (nonatomic) CDStruct_1b6d18a9 previousDetectionDuration;
@property (nonatomic) CDStruct_1b6d18a9 previousNoDetectionPTS;
@property (nonatomic) int lastDetectionCount;

- (id)init;

@end
