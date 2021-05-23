/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class PVImageBuffer;

@interface PVComputeDenseCRF : NSObject

{
    PVImageBuffer *_color;
    PVImageBuffer *_proxy;
}

- (id)initWithColor:(id)arg1 proximity:(id)arg2;
- (void)generateMatte:(id)arg1;

@end
