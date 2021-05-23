/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MCDeviceUploadRequestType : NSObject

{
    NSString *_code;
    NSString *_name;
}

@property (nonatomic, readonly) NSString *code;
@property (nonatomic, readonly) NSString *name;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCode:(id)arg1 name:(id)arg2;

@end
