/*
 Image: /System/Library/PrivateFrameworks/FusionPluginKit.framework/FusionPluginKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID;

@interface HSMessage : NSObject

{
    NSUUID *_uuid;
    NSString *_hostEnvironment;
    NSString *_deviceEnvironment;
}

@property (nonatomic, readonly) NSUUID *uuid;
@property (retain, nonatomic) NSString *hostEnvironment;
@property (retain, nonatomic) NSString *deviceEnvironment;

+ (_Bool)supportsSecureCoding;
+ (id)supportedClasses;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
