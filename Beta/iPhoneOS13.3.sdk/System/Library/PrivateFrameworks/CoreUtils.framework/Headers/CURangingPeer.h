/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSData, NSString;

@interface CURangingPeer : NSObject

{
    NSData *_deviceAddress;
    NSData *_deviceIRK;
    NSString *_deviceModel;
}

@property (copy, nonatomic) NSData *deviceAddress;
@property (copy, nonatomic) NSData *deviceIRK;
@property (copy, nonatomic) NSString *deviceModel;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end
