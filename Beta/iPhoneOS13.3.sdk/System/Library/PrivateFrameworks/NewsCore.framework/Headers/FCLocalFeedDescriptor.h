/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCFeedDescriptor.h>

@class NSArray;

@protocol FCChannelProviding, FCFeedTheming;

@interface FCLocalFeedDescriptor : FCFeedDescriptor

{
    NSArray *_paths;
    id <FCFeedTheming> _feedTheme;
    id <FCChannelProviding> _channel;
}

@property (nonatomic, readonly) NSArray *paths;
@property (retain, nonatomic) id <FCFeedTheming> feedTheme;
@property (retain, nonatomic) id <FCChannelProviding> channel;

- (id)name;
- (id)theme;
- (_Bool)isSubscribable;
- (id)streamOfLatestHeadlinesWithContext:(id)arg1;
- (long long)feedType;
- (id)initWithIdentifier:(id)arg1 articlePaths:(id)arg2 theme:(id)arg3 channel:(id)arg4;
- (id)fetchOperationForHeadlinesWithIDs:(id)arg1;
- (_Bool)isSubscribedTo;

@end
