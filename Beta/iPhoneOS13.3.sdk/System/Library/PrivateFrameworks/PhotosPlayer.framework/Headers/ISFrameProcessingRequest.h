/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <Foundation/NSObject.h>

@class CIImage;

@interface ISFrameProcessingRequest : NSObject

{
    CIImage *_image;
    long long _type;
    double _renderScale;
    CDStruct_1b6d18a9 _time;
}

@property (retain, nonatomic) CIImage *image;
@property (nonatomic) CDStruct_1b6d18a9 time;
@property (nonatomic) long long type;
@property (nonatomic) double renderScale;

@end
