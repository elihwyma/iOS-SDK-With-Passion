/*
 Image: /System/Library/PrivateFrameworks/C2.framework/C2
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface C2RoutingTable : NSObject

{
    NSMutableDictionary *_routingTable;
}

@property (retain, nonatomic) NSMutableDictionary *routingTable;

- (id)init;
- (void)updateOriginalHostname:(id)arg1 destinationHostname:(id)arg2;
- (id)copyAndDecorateRequest:(id)arg1;

@end
