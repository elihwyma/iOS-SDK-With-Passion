/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface LPYouTubeURLComponents : NSObject

{
    NSString *_videoID;
    double _startTime;
}

@property (copy, nonatomic) NSString *videoID;
@property (nonatomic) double startTime;

+ (_Bool)parseYouTubeTimeFormat:(id)arg1 outTime:(double *)arg2;
+ (id)formatAsYouTubeTime:(double)arg1;

@end
