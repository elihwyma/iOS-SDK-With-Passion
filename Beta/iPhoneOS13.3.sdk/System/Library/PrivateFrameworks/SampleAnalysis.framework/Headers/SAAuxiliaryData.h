/*
 Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

#import <Foundation/NSObject.h>

@class SAFanSpeed, SATimestamp;

@interface SAAuxiliaryData : NSObject

{
    SAFanSpeed *_fanSpeed;
    struct **_mountStatus;
    SATimestamp *_timestamp;
}

@property (retain) SAFanSpeed *fanSpeed;
@property struct **mountStatus;
@property (retain) SATimestamp *timestamp;

+ (id)auxiliaryDataForTimestamp:(id)arg1;

- (void)dealloc;

@end
