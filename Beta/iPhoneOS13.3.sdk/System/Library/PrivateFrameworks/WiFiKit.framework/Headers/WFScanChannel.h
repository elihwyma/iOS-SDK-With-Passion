/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <Foundation/NSObject.h>

@interface WFScanChannel : NSObject

{
    long long _channel;
    long long _flags;
}

@property (nonatomic) long long channel;
@property (nonatomic) long long flags;

- (id)init;
- (id)description;
- (id)initWithChannel:(long long)arg1 flags:(long long)arg2;

@end
