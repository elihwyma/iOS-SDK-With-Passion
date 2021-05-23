/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

@class CACVoiceOverAnnouncement, NSMutableArray;

@protocol OS_dispatch_queue;

@interface CACVoiceOverAnnouncer : NSObject

{
    NSObject<OS_dispatch_queue> *_announcerQueue;
    _Bool _shouldInterruptCurrentAnnouncement;
    NSMutableArray *_voiceOverAnnouncementQueue;
    CACVoiceOverAnnouncement *_currentAnnouncement;
}

@property (retain, nonatomic) NSMutableArray *voiceOverAnnouncementQueue;
@property (retain, nonatomic) CACVoiceOverAnnouncement *currentAnnouncement;
@property (nonatomic) _Bool shouldInterruptCurrentAnnouncement;

- (id)init;
- (void)_didFinishAnnouncement:(id)arg1;
- (void)_dequeueNextAnnouncement;
- (void)announceMessage:(id)arg1 type:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)prepareForImmediateAnnouncement;

@end
