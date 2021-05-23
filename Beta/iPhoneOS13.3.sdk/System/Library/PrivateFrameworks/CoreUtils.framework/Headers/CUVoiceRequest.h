/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class VSSpeechRequest;

__attribute__((visibility("hidden")))
@interface CUVoiceRequest : NSObject

{
    unsigned int _flags;
    CDUnknownBlockType _completion;
    id _owner;
    VSSpeechRequest *_speechRequest;
}

@property (copy, nonatomic) CDUnknownBlockType completion;
@property (nonatomic) unsigned int flags;
@property (retain, nonatomic) id owner;
@property (retain, nonatomic) VSSpeechRequest *speechRequest;

@end
