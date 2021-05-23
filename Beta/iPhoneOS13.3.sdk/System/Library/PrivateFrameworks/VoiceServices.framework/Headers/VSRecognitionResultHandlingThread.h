/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <Foundation/NSObject.h>

@class NSConditionLock, NSMutableArray;

@protocol VSRecognitionResultHandlingThreadDelegate;

__attribute__((visibility("hidden")))
@interface VSRecognitionResultHandlingThread : NSObject

{
    id <VSRecognitionResultHandlingThreadDelegate> _delegate;
    NSMutableArray *_requests;
    NSConditionLock *_lock;
    struct {
        unsigned int running:1;
        unsigned int delegateDidHandleResults:1;
        unsigned int valid:1;
    } _resultHandlingFlags;
}

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)setDelegate:(id)arg1;
- (void)handleResults:(id)arg1 withHandler:(id)arg2;
- (void)_handleRequests;
- (void)_notifyRequestHandled:(id)arg1;

@end
