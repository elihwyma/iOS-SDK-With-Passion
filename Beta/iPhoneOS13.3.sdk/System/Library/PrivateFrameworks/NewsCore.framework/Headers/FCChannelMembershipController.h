/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCChannelMembershipRecordSource;

@interface FCChannelMembershipController : NSObject

{
    FCChannelMembershipRecordSource *_recordSource;
}

@property (nonatomic, readonly) FCChannelMembershipRecordSource *recordSource;

- (id)channelMembershipsFromHeldRecords:(id)arg1;
- (id)initWithChannelMembershipRecordSource:(id)arg1;
- (void)fetchChannelMembershipsForIDs:(id)arg1 maximumCachedAge:(double)arg2 callbackQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)cachedChannelMembershipsForIDs:(id)arg1;

@end
