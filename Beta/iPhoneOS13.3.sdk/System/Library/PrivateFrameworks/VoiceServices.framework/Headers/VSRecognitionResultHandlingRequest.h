/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <Foundation/NSObject.h>

@class NSArray, VSRecognitionAction;

@protocol VSRecognitionResultHandler;

__attribute__((visibility("hidden")))
@interface VSRecognitionResultHandlingRequest : NSObject

{
    id <VSRecognitionResultHandler> _handler;
    NSArray *_results;
    VSRecognitionAction *_action;
}

- (void)dealloc;
- (id)handler;
- (id)results;
- (id)initWithHandler:(id)arg1 results:(id)arg2;
- (id)nextAction;
- (void)setNextAction:(id)arg1;

@end
