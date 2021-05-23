/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MCDeviceUploadUser : NSObject

{
    NSString *_dsid;
    NSString *_name;
}

@property (nonatomic, readonly) NSString *dsid;
@property (nonatomic, readonly) NSString *name;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDsid:(id)arg1 name:(id)arg2;
- (id)initWithApproverDict:(id)arg1;

@end
