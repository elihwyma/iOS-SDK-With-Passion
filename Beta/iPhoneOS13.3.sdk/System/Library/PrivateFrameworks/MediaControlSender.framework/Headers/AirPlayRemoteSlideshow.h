/*
 Image: /System/Library/PrivateFrameworks/MediaControlSender.framework/MediaControlSender
 */

#import <Foundation/NSObject.h>

@class MediaControlClient;

@protocol AirPlayRemoteSlideshowDelegate, OS_dispatch_queue;

@interface AirPlayRemoteSlideshow : NSObject

{
    NSObject<OS_dispatch_queue> *_internalQueue;
    MediaControlClient *_client;
    id <AirPlayRemoteSlideshowDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_userQueue;
    _Bool _started;
    double _startTime;
}

@property (nonatomic) id <AirPlayRemoteSlideshowDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)setPassword:(id)arg1;
- (void)setHost:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)_configureEventHandler;
- (void)getFeaturesWithOptions:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getFeaturesWithCompletion:(CDUnknownBlockType)arg1;
- (void)startWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
