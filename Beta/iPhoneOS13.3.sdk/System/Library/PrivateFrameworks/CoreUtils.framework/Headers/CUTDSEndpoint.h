/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSData, NSString;

@interface CUTDSEndpoint : NSObject

{
    int _dataLinkType;
    NSData *_deviceAddress;
    NSString *_serviceType;
}

@property (nonatomic) int dataLinkType;
@property (copy, nonatomic) NSData *deviceAddress;
@property (copy, nonatomic) NSString *serviceType;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
