/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSDate, NSTimer;

__attribute__((visibility("hidden")))
@interface VUINowPlayingTimerFeatureInfo : NSObject

{
    NSTimer *_repeatingTimer;
    NSTimer *_oneTimeTimer;
    NSDate *_startDate;
    NSDate *_backgroundedDate;
}

@property (weak, nonatomic) NSTimer *repeatingTimer;
@property (weak, nonatomic) NSTimer *oneTimeTimer;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *backgroundedDate;

@end
