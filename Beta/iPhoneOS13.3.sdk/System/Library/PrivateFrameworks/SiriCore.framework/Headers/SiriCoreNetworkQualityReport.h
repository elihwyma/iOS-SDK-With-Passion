/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <Foundation/NSObject.h>

@interface SiriCoreNetworkQualityReport : NSObject

{
    long long _cellularInstant;
    long long _cellularHistorical;
    long long _wifiInstant;
    long long _wifiHistorical;
}

@property (nonatomic) long long cellularInstant;
@property (nonatomic) long long cellularHistorical;
@property (nonatomic) long long wifiInstant;
@property (nonatomic) long long wifiHistorical;

@end
