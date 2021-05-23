/*
 Image: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, NSUUID;

@interface SidecarDevice : NSObject

{
    NSUUID *_identifier;
    NSString *_model;
    NSString *_name;
    unsigned long long _status;
    NSString *_version;
    long long _rapportVersion;
    NSString *_deviceTypeIdentifier;
    unsigned long long _generation;
}

@property (nonatomic, readonly) long long rapportVersion;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSURL *imageURL;
@property (nonatomic, readonly) NSString *localizedDeviceType;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic) unsigned long long status;
@property (nonatomic, readonly) NSString *version;
@property (nonatomic, readonly) _Bool hasHomeButton;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *deviceTypeIdentifier;

+ (_Bool)supportsSecureCoding;
+ (id)allDevices;
+ (id)imageURLForDeviceTypeIdentifier:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 model:(id)arg2 name:(id)arg3 version:(id)arg4;
- (void)_updateFromDevice:(id)arg1 generation:(unsigned long long)arg2;
- (id)initWithIdentifier:(id)arg1 model:(id)arg2 name:(id)arg3;

@end
