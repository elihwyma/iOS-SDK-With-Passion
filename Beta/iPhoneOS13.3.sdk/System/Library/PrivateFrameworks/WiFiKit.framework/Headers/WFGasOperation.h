/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <WiFiKit/WFOperation.h>

@class NSSet;

@protocol WFWiFiGasProxy;

@interface WFGasOperation : WFOperation

{
    NSSet *_results;
    id <WFWiFiGasProxy> _gasProxy;
    NSSet *_networks;
    unsigned long long _elements;
}

@property (retain, nonatomic) id <WFWiFiGasProxy> gasProxy;
@property (retain, nonatomic) NSSet *networks;
@property (retain) NSSet *results;
@property unsigned long long elements;

- (void)start;
- (id)initWithGasProxy:(id)arg1 networks:(id)arg2 elements:(unsigned long long)arg3;
- (void)_processGasResults:(id)arg1 error:(int)arg2;

@end
