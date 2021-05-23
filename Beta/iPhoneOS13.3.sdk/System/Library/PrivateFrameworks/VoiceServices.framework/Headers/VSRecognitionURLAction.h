/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <VoiceServices/VSRecognitionAction.h>

@class NSURL;

@interface VSRecognitionURLAction : VSRecognitionAction

{
    NSURL *_url;
}

- (void)dealloc;
- (void)setURL:(id)arg1;
- (id)URL;
- (id)perform;
- (int)completionType;

@end
