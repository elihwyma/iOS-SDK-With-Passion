/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface MCDeviceUploadSubmissionResponse : NSObject

{
    NSString *_requestId;
    NSString *_requestStatus;
    NSString *_errorMessage;
    NSArray *_devices;
}

@property (nonatomic, readonly) NSString *requestId;
@property (nonatomic, readonly) NSString *requestStatus;
@property (nonatomic, readonly) NSString *errorMessage;
@property (nonatomic, readonly) NSArray *devices;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDict:(id)arg1;
- (id)_devicesFromDeviceArray:(id)arg1;

@end
