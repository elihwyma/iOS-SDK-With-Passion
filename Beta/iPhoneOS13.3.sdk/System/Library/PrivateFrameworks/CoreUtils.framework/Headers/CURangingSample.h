/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSData, NSString;

@interface CURangingSample : NSObject

{
    int _channel;
    int _rawRSSI;
    NSData *_deviceAddress;
    NSString *_deviceModel;
}

@property (nonatomic) int channel;
@property (copy, nonatomic) NSData *deviceAddress;
@property (copy, nonatomic) NSString *deviceModel;
@property (nonatomic) int rawRSSI;

- (id)description;

@end
