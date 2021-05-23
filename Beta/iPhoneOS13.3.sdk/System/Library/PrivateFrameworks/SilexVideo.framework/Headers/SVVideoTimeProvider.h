/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class AVPlayer, NSString;

@protocol SVTimeConverting;

@interface SVVideoTimeProvider : NSObject

{
    AVPlayer *_player;
    id <SVTimeConverting> _timeConverter;
}

@property (nonatomic, readonly) AVPlayer *player;
@property (nonatomic, readonly) id <SVTimeConverting> timeConverter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double time;

- (id)initWithPlayer:(id)arg1 timeConverter:(id)arg2;

@end
