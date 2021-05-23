/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class VSSpeechRequest;

__attribute__((visibility("hidden")))
@interface SFSiriRequest : NSObject

{
    _Bool _synthesizing;
    unsigned int _flags;
    double _delaySecs;
    id _owner;
    CDUnknownBlockType _speechCompletion;
    VSSpeechRequest *_speechRequest;
    CDUnknownBlockType _speechStartHandler;
    unsigned long long _startTicks;
}

@property (nonatomic) double delaySecs;
@property (nonatomic) unsigned int flags;
@property (retain, nonatomic) id owner;
@property (copy, nonatomic) CDUnknownBlockType speechCompletion;
@property (retain, nonatomic) VSSpeechRequest *speechRequest;
@property (copy, nonatomic) CDUnknownBlockType speechStartHandler;
@property (nonatomic) unsigned long long startTicks;
@property (nonatomic) _Bool synthesizing;

@end
