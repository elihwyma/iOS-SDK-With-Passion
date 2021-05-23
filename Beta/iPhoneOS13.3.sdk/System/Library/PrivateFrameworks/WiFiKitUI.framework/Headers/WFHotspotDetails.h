/*
 Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface WFHotspotDetails : NSObject

{
    NSNumber *_batteryLife;
    NSString *_cellularProtocolString;
    NSNumber *_signalStrength;
}

@property (retain, nonatomic) NSNumber *batteryLife;
@property (copy, nonatomic) NSString *cellularProtocolString;
@property (retain, nonatomic) NSNumber *signalStrength;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (_Bool)isEqualHotspotDetails:(id)arg1;

@end
