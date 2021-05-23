/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CACVoiceOverAnnouncement : NSObject

{
    NSString *_message;
    long long _type;
    CDUnknownBlockType _completion;
}

@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) CDUnknownBlockType completion;

- (id)initWithMessage:(id)arg1 type:(long long)arg2 completion:(CDUnknownBlockType)arg3;

@end
