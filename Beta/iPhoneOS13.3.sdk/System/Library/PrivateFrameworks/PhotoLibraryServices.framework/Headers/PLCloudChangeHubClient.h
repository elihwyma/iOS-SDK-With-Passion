/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSUUID;

@interface PLCloudChangeHubClient : NSObject

{
    unsigned char _nodeUUID[16];
    NSUUID *_uuid;
}

@property (copy, readonly) NSUUID *uuid;

- (id)init;
- (id)initWithUUID:(id)arg1;
- (id)fetchPendingEventsSinceIndex:(unsigned long long)arg1;
- (id)fetchResultsSinceIndex:(unsigned long long)arg1;
- (id)resultsFromReply:(id)arg1 sinceIndex:(unsigned long long)arg2;
- (id)successfulResultWithEvents:(id)arg1 changeHubEventIndex:(unsigned long long)arg2;
- (id)unsuccesfulResultWithWithType:(long long)arg1;

@end
