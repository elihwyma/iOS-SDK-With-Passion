/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface VUIMediaEntitiesFetchControllerResult : NSObject

{
    long long _fetchReason;
    NSArray *_fetchResponses;
    NSArray *_fetchResponseChanges;
}

@property (nonatomic) long long fetchReason;
@property (copy, nonatomic) NSArray *fetchResponses;
@property (copy, nonatomic) NSArray *fetchResponseChanges;

- (id)init;
- (id)description;
- (id)initWithFetchReason:(long long)arg1 fetchResponses:(id)arg2;

@end
