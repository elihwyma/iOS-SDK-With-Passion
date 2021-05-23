/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface WFScanRequest : NSObject

{
    _Bool _applyRssiThresholdFilter;
    _Bool _includeBSSList;
    NSString *_ssid;
    unsigned long long _dwellTime;
    NSArray *_channels;
    long long _rssiThreshold;
}

@property (copy, nonatomic) NSString *ssid;
@property (retain, nonatomic) NSArray *channels;
@property (nonatomic) long long rssiThreshold;
@property _Bool applyRssiThresholdFilter;
@property unsigned long long dwellTime;
@property _Bool includeBSSList;

+ (id)scanRequestForSSID:(id)arg1 channels:(id)arg2;
+ (id)scanRequestForChannels:(id)arg1;

- (id)init;
- (id)description;
- (id)scanParameters;
- (id)initWithSSID:(id)arg1 channels:(id)arg2;
- (id)_defaultScanDictionary;
- (id)_channelListFromArrayOfChannels:(id)arg1;

@end
