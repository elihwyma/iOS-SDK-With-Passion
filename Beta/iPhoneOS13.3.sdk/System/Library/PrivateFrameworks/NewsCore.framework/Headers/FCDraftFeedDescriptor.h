/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCFeedDescriptor.h>

@class NSString;

@protocol FCChannelProviding;

@interface FCDraftFeedDescriptor : FCFeedDescriptor

{
    id <FCChannelProviding> _channel;
    NSString *_articleListID;
    NSString *_issueListID;
}

@property (nonatomic, readonly) id <FCChannelProviding> channel;
@property (nonatomic, readonly) NSString *articleListID;
@property (nonatomic, readonly) NSString *issueListID;

- (id)name;
- (id)initWithChannel:(id)arg1 articleListID:(id)arg2 issueListID:(id)arg3;
- (id)feedGroupEmittersWithConfiguration:(id)arg1 forYouConfig:(id)arg2;
- (id)backingChannel;
- (id)allEmitterClasses;
- (long long)feedType;

@end
