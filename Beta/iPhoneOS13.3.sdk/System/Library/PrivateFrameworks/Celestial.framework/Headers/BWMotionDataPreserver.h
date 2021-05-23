/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSMutableData, NSString;

@interface BWMotionDataPreserver : NSObject

{
    NSString *_name;
    NSMutableData *_preservedISPMotionData;
    unsigned long long _lengthOfInitialISPMotionData;
    int _sampleCountOfInitialISPMotionData;
    NSMutableData *_preservedISPHallData;
    unsigned long long _lengthOfInitialISPHallData;
    int _sampleCountOfInitialISPHallData;
    NSString *_currentISPHallPortType;
}

+ (void)initialize;

- (void)dealloc;
- (id)initWithName:(id)arg1;
- (void)reset;
- (_Bool)preserveMotionDataForSoonToBeDroppedSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)prependPreservedMotionDataToSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)_preserveMotionDataForSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 willBeDropped:(_Bool)arg2;

@end
