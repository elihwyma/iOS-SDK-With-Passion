/*
 Image: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableSet;

@interface WPAdvertisingRequestsQueue : NSObject

{
    NSMutableArray *_queue;
    NSMutableSet *_clientTypes;
}

@property (retain, nonatomic) NSMutableArray *queue;
@property (retain, nonatomic) NSMutableSet *clientTypes;

- (id)init;
- (unsigned long long)count;
- (void)remove:(id)arg1;
- (void)removeAll;
- (void)add:(id)arg1;
- (void)removeRequestsOfClientType:(unsigned char)arg1;
- (_Bool)isAdvertisingForClientType:(unsigned char)arg1;
- (id)allRequests;

@end
