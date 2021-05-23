/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AATrustedDevice : NSObject

{
    _Bool _fmipEnabled;
    _Bool _currentDevice;
    _Bool _showFMIPLink;
    _Bool _showBackupRow;
    _Bool _showFMIPRow;
    _Bool _injectNativeHeader;
    NSString *_deviceID;
    NSString *_name;
    NSString *_model;
    NSString *_osVersion;
    NSString *_modelDisplayName;
    NSString *_modelSmallPhotoURL3x;
    NSString *_modelSmallPhotoURL2x;
    NSString *_modelSmallPhotoURL1x;
    NSString *_modelLargePhotoURL3x;
    NSString *_modelLargePhotoURL2x;
    NSString *_modelLargePhotoURL1x;
    NSString *_deviceDetailUri;
    NSString *_deviceDetailHttpMethod;
    NSString *_FMIPDeviceID;
    NSString *_detailDeviceName;
    NSString *_detailSubLabel;
    NSString *_deviceQualifiedClass;
    NSString *_rawLatestBackup;
    NSString *_backupUUID;
}

@property (nonatomic, readonly) NSString *deviceID;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSString *osVersion;
@property (nonatomic, readonly) NSString *modelDisplayName;
@property (nonatomic, readonly) NSString *modelSmallPhotoURL3x;
@property (nonatomic, readonly) NSString *modelSmallPhotoURL2x;
@property (nonatomic, readonly) NSString *modelSmallPhotoURL1x;
@property (nonatomic, readonly) NSString *modelLargePhotoURL3x;
@property (nonatomic, readonly) NSString *modelLargePhotoURL2x;
@property (nonatomic, readonly) NSString *modelLargePhotoURL1x;
@property (nonatomic, readonly) NSString *deviceDetailUri;
@property (nonatomic, readonly) NSString *deviceDetailHttpMethod;
@property (nonatomic, readonly) _Bool fmipEnabled;
@property (nonatomic, readonly) _Bool currentDevice;
@property (nonatomic, readonly) _Bool showFMIPLink;
@property (nonatomic, readonly) _Bool showBackupRow;
@property (nonatomic, readonly) _Bool showFMIPRow;
@property (nonatomic, readonly) _Bool injectNativeHeader;
@property (nonatomic, readonly) NSString *FMIPDeviceID;
@property (nonatomic, readonly) NSString *detailDeviceName;
@property (nonatomic, readonly) NSString *detailSubLabel;
@property (nonatomic, readonly) NSString *deviceQualifiedClass;
@property (nonatomic, readonly) NSString *rawLatestBackup;
@property (nonatomic, readonly) NSString *backupUUID;

- (id)initWithDictionary:(id)arg1;
- (void)updateWithRUIClientInfo:(id)arg1;

@end
