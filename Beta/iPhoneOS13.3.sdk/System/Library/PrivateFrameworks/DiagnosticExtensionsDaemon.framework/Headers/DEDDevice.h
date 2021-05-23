/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString, SFDevice;

@interface DEDDevice : NSObject

{
    NSString *_address;
    NSString *_build;
    NSString *_color;
    NSString *_deviceClass;
    NSString *_enclosureColor;
    NSString *_identifier;
    NSString *_model;
    NSString *_name;
    NSString *_productType;
    NSString *_platform;
    NSSet *_capabilities;
    long long _status;
    long long _transport;
    long long _remoteTransport;
    SFDevice *_sfDevice;
    NSString *__hashingKey;
}

@property (retain, nonatomic) NSString *_hashingKey;
@property (retain) NSSet *capabilities;
@property (retain) NSString *address;
@property (retain) NSString *build;
@property (retain) NSString *color;
@property (retain) NSString *deviceClass;
@property (retain) NSString *enclosureColor;
@property (retain) NSString *identifier;
@property (retain) NSString *model;
@property (retain) NSString *name;
@property (retain) NSString *productType;
@property (retain) NSString *platform;
@property long long status;
@property long long transport;
@property long long remoteTransport;
@property (retain) SFDevice *sfDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)currentDevice;
+ (id)archivedClasses;
+ (id)nilSafeDevice;
+ (id)deviceClassForProductType:(id)arg1;
+ (id)modelForProductType:(id)arg1;
+ (id)deviceWithDictionary:(id)arg1;
+ (id)_currentDeviceId;
+ (id)deviceForSFDevice:(id)arg1 andStatus:(long long)arg2;
+ (id)deviceForSFDevice:(id)arg1 systemInfo:(id)arg2 andStatus:(long long)arg3;
+ (id)idsDeviceWithDevice:(id)arg1 address:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)serialize;
- (_Bool)isEqualToDevice:(id)arg1;
- (id)shortDescription;
- (id)imageData;
- (id)publicLogDescription;
- (_Bool)hasCapabilities:(id)arg1;
- (_Bool)isCurrentDevice;
- (_Bool)isTemporaryDevice;
- (id)hashingKey;
- (id)hashingKeyForTempDevice;
- (_Bool)isLikeDevice:(id)arg1;
- (_Bool)isMoreCompleteThan:(id)arg1;
- (id)imageURLForScale:(float)arg1;
- (id)imageURLForDeviceClass:(id)arg1 deviceModel:(id)arg2 deviceColor:(id)arg3 size:(long long)arg4 variant:(long long)arg5 scale:(float)arg6;
- (void)fetchIconImageDataForScale:(float)arg1 completionCompletion:(CDUnknownBlockType)arg2;

@end
