/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@interface _EDMailboxServerCount : NSObject

{
    long long _serverCount;
    long long _mostRecentStatusCount;
    long long _lastSyncStatusCount;
}

@property (nonatomic) long long serverCount;
@property (nonatomic) long long mostRecentStatusCount;
@property (nonatomic) long long lastSyncStatusCount;

@end
