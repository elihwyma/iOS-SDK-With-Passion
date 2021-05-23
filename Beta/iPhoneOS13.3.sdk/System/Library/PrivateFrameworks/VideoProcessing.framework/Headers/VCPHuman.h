/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPHuman : NSObject

{
    float _confidence;
    unsigned long long _flags;
    struct CGRect _bounds;
}

@property unsigned long long flags;
@property struct CGRect bounds;
@property float confidence;

+ (unsigned long long)flagsFromKeypoints:(id)arg1 withMinConfidence:(float)arg2;

- (id)init;

@end
