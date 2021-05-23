/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface _CPLTimingStatistic : NSObject

{
    unsigned long long _recordCount;
    unsigned long long _batchCount;
    unsigned long long _errorCount;
    unsigned long long _cancelCount;
    double _duration;
}

- (id)description;
- (void)updateWithDuration:(double)arg1 recordCount:(unsigned long long)arg2 error:(_Bool)arg3 cancelled:(_Bool)arg4;

@end
