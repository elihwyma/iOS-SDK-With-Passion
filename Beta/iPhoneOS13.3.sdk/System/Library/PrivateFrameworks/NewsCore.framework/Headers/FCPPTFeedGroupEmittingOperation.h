/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@class NSString;

@interface FCPPTFeedGroupEmittingOperation : FCFeedGroupEmittingOperation

{
    NSString *_channelID;
}

@property (retain, nonatomic) NSString *channelID;

- (void)performOperation;
- (id)initWithChannelID:(id)arg1 context:(id)arg2 fromCursor:(id)arg3 toCursor:(id)arg4 groupEmitterIdentifier:(id)arg5;

@end
