/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface AVDisplayCriteriaInternal : NSObject

{
    int videoDynamicRange;
    float refreshRate;
}

- (id)initWithRefreshRate:(float)arg1 videoDynamicRange:(int)arg2;

@end
