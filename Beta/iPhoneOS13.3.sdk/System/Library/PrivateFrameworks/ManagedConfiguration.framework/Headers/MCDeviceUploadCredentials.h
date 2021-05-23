/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MCDeviceUploadCredentials : NSObject

{
    NSString *_dsid;
    NSString *_dsToken;
}

@property (nonatomic, readonly) NSString *dsid;
@property (nonatomic, readonly) NSString *dsToken;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDsid:(id)arg1 dsToken:(id)arg2;

@end
