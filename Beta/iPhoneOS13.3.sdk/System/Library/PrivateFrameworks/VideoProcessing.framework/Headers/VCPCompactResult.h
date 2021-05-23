/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPCompactResult : NSObject

{
    float _score;
    CDStruct_e83c9415 _timerange;
}

@property CDStruct_e83c9415 timerange;
@property float score;

- (id)initWithTimerange:(CDStruct_e83c9415)arg1 andScore:(float)arg2;

@end
