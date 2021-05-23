/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSOperation.h>

@class NSString;

@interface CACMessageDisplayOperation : NSOperation

{
    _Bool _ignore;
    NSString *_message;
    long long _type;
}

@property _Bool ignore;
@property (retain) NSString *message;
@property long long type;

- (void)main;
- (id)initWithMessageString:(id)arg1 type:(long long)arg2;

@end
