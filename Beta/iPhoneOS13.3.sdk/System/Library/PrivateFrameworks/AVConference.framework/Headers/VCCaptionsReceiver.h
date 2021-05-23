/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class VCCaptionsTranscription;

@protocol VCCaptionsReceiverDelegate;

__attribute__((visibility("hidden")))
@interface VCCaptionsReceiver : NSObject

{
    unsigned int _captionsLastUtteranceNumber;
    unsigned int _captionsLastUpdateNumber;
    id _delegate;
    VCCaptionsTranscription *_currentTranscription;
}

@property (readonly) id <VCCaptionsReceiverDelegate> delegate;
@property (retain, nonatomic) VCCaptionsTranscription *currentTranscription;

- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)processCaptionsData:(id)arg1;

@end
