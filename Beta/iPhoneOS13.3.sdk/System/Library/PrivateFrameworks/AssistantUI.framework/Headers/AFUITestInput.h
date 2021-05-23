/*
 Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

#import <Foundation/NSObject.h>

@class SASRequestOptions;

@interface AFUITestInput : NSObject

{
    SASRequestOptions *_requestOptions;
}

@property (nonatomic, readonly) SASRequestOptions *requestOptions;

+ (id)_baseRequestOptions;

- (id)initWithText:(id)arg1;
- (id)_initWithRequestOptions:(id)arg1;
- (id)initWithRecordedSpeechURL:(id)arg1;

@end
