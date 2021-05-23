/*
 Image: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

#import <Foundation/NSObject.h>

@class AVAudioSession;

__attribute__((visibility("hidden")))
@interface APAVAudioSessionManager : NSObject

{
    struct OpaqueFigSimpleMutex *_mutex;
    AVAudioSession *_session;
    unsigned long long _type;
    _Bool _isSetUp;
}

@property (nonatomic, readonly) AVAudioSession *session;

+ (id)mediaSessionManager;
+ (id)ambientSessionManager;

- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1;
- (_Bool)setActive:(_Bool)arg1 error:(id *)arg2;
- (void)resetSession;
- (void)setUpSession;
- (_Bool)setSessionMode:(id)arg1 error:(id *)arg2;

@end
