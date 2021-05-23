/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@class NSString;

@interface FCChannelIssuesGroupEmittingOperation : FCFeedGroupEmittingOperation

{
    NSString *_channelIdentifier;
}

@property (retain, nonatomic) NSString *channelIdentifier;

- (id)init;
- (void)performOperation;
- (id)initWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 groupEmitterIdentifier:(id)arg4 channelIdentifier:(id)arg5;

@end
