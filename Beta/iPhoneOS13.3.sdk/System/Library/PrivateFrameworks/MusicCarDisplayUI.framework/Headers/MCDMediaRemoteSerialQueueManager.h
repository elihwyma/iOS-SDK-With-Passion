/*
 Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue;

@interface MCDMediaRemoteSerialQueueManager : NSObject

{
    NSOperationQueue *_mediaRemoteSerialQueue;
}

@property (retain, nonatomic) NSOperationQueue *mediaRemoteSerialQueue;

+ (id)sharedInstance;

- (id)init;
- (void)cancelAllOperations;
- (void)addOperation:(CDUnknownBlockType)arg1 cancelAllOperations:(_Bool)arg2;

@end
