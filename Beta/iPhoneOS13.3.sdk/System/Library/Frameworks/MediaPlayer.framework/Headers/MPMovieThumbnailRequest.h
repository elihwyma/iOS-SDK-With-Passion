/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface MPMovieThumbnailRequest : NSObject

{
    NSArray *_times;
    long long _timeOption;
}

@property (retain, nonatomic) NSArray *times;
@property (nonatomic) long long timeOption;

@end
