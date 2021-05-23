/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <ProtocolBuffer/NSOperation.h>

@class NSArray;

@interface SSVPlayActivityDebugLogOperation : NSOperation

{
    NSArray *_playActivityEvents;
}

@property (copy, nonatomic) NSArray *playActivityEvents;

- (void)main;

@end
