/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSDate;

@protocol PXVideoScrubberControllerTarget;

@interface PXScrubberSeekRequest : NSObject

{
    NSDate *_dateCreated;
    double _seekTime;
    id <PXVideoScrubberControllerTarget> _target;
}

@property (copy, nonatomic) NSDate *dateCreated;
@property (nonatomic) double seekTime;
@property (weak, nonatomic) id <PXVideoScrubberControllerTarget> target;

- (id)init;
- (id)initWithTarget:(id)arg1 seekTime:(double)arg2;

@end
