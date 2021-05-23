/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface AVTimecode : NSObject

{
    unsigned int _tc_flags;
    long long _frameNumber;
    struct opaqueCMFormatDescription *_formatDescription;
    struct CVSMPTETime _timecodeStruct;
    CDStruct_1b6d18a9 _frameDuration;
}

@property (nonatomic) struct CVSMPTETime timecodeStruct;
@property (nonatomic) long long frameNumber;
@property (nonatomic) CDStruct_1b6d18a9 frameDuration;
@property (nonatomic) unsigned int tc_flags;
@property (nonatomic) struct opaqueCMFormatDescription *formatDescription;

@end
