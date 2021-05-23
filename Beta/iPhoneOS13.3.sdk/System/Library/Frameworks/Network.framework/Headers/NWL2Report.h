/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Foundation/NSObject.h>

@interface NWL2Report : NSObject

{
    unsigned char _cellularPowerCostDownload;
    unsigned char _cellularPowerCostUpload;
    _Bool _cellularKnownGood;
    unsigned char _cellularRadioTechnology;
    _Bool _wifiKnownGood;
    unsigned char _wifiRadioTechnology;
    int _cellularLQM;
    int _wifiLQM;
    int _wifiRSSI;
}

@property (nonatomic) int cellularLQM;
@property (nonatomic) unsigned char cellularPowerCostDownload;
@property (nonatomic) unsigned char cellularPowerCostUpload;
@property (nonatomic) _Bool cellularKnownGood;
@property (nonatomic) unsigned char cellularRadioTechnology;
@property (nonatomic) int wifiLQM;
@property (nonatomic) int wifiRSSI;
@property (nonatomic) _Bool wifiKnownGood;
@property (nonatomic) unsigned char wifiRadioTechnology;

- (id)description;

@end
