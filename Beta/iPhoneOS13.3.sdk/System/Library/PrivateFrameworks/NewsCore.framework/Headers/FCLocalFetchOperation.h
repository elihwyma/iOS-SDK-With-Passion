/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCFetchOperation.h>

@class NSArray, NSMutableArray;

@protocol FCChannelProviding;

@interface FCLocalFetchOperation : FCFetchOperation

{
    NSArray *_paths;
    NSMutableArray *_headlines;
    id <FCChannelProviding> _channel;
}

@property (nonatomic, readonly) NSArray *paths;
@property (nonatomic, readonly) NSMutableArray *headlines;
@property (retain, nonatomic) id <FCChannelProviding> channel;

- (void)performOperation;
- (id)initWithPaths:(id)arg1 andChannel:(id)arg2;
- (void)convertPathsToHeadlines;

@end
