/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCSegmentCallHistory : NSObject

{
    int _longTermAdjustmentTBR;
    int _shortTermAdjustmentTBR;
    int _previousISBR;
    int _longTermISBR;
    int _shortTermISBR;
    int _longTermSATXBR;
    int _shortTermSATXBR;
    int _longTermSARBR;
    int _shortTermSARBR;
    int _longTermBWE;
    int _shortTermBWE;
    int _historyLength;
}

@property (readonly) int shortTermAdjustmentTBR;
@property (readonly) int longTermAdjustmentTBR;
@property (readonly) int previousISBR;
@property (readonly) int longTermISBR;
@property (readonly) int shortTermISBR;
@property (readonly) int longTermSATXBR;
@property (readonly) int shortTermSATXBR;
@property (readonly) int longTermSARBR;
@property (readonly) int shortTermSARBR;
@property (readonly) int longTermBWE;
@property (readonly) int shortTermBWE;
@property (readonly) int historyLength;

+ (int)fieldSize;

- (id)init;
- (int)deserialize:(int *)arg1;
- (int)serialize:(int *)arg1;
- (void)updateSegmentWithTBR:(int)arg1 ISBTR:(int)arg2 SATXBR:(int)arg3 SARBR:(int)arg4 BWE:(int)arg5 shortTermWeight:(double)arg6 longTermWeight:(double)arg7;

@end
