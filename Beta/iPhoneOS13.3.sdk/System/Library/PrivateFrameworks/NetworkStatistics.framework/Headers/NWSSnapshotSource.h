/*
 Image: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
 */

#import <Foundation/NSObject.h>

@interface NWSSnapshotSource : NSObject

{
    int _sockFd;
}

+ (id)routeSnapshotForIPv4Host:(struct sockaddr_in *)arg1 viaInterfaceIndex:(int)arg2;
+ (id)routeSnapshotForIPv6Host:(struct sockaddr_in6 *)arg1 viaInterfaceIndex:(int)arg2;

- (id)init;
- (void)dealloc;
- (long long)send:(void *)arg1 length:(unsigned long long)arg2 err:(int *)arg3;
- (long long)recv:(void *)arg1 length:(unsigned long long)arg2 err:(int *)arg3;

@end
