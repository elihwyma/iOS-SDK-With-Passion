/*
 Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <Foundation/NSObject.h>

@class NSError;

@interface TLAlertPlaybackCompletionContext : NSObject

{
    CDUnknownBlockType _completionHandler;
    long long _playbackCompletionType;
    NSError *_error;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (nonatomic) long long playbackCompletionType;
@property (copy, nonatomic) NSError *error;

@end
