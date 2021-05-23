/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSError;

@interface MPCAssistantSendCommandResult : NSObject

{
    NSArray *_returnStatuses;
    NSError *_error;
}

@property (nonatomic, readonly) NSArray *returnStatuses;
@property (nonatomic, readonly) NSError *error;

- (id)initWithReturnStatuses:(id)arg1 error:(id)arg2;

@end
