/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class NSTimer;

@interface OZNotificationStub : NSObject

{
    NSTimer *_pTimer;
    struct OZDocument *_pDocument;
}

- (void)dealloc;
- (void)fire;
- (void)createTimer;
- (void)releaseTimer;
- (id)initWithOZDocument:(struct OZDocument *)arg1 useTimer:(_Bool)arg2;
- (void)processNotifications:(id)arg1;

@end
