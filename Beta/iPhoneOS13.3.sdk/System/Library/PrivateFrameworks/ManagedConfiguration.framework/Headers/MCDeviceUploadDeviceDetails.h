/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MCDeviceUploadDeviceDetails : NSObject

{
    NSString *_serialNumber;
    NSString *_deviceUploadStatus;
    NSString *_errorMessage;
}

@property (nonatomic, readonly) NSString *serialNumber;
@property (nonatomic, readonly) NSString *deviceUploadStatus;
@property (nonatomic, readonly) NSString *errorMessage;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDict:(id)arg1;

@end
