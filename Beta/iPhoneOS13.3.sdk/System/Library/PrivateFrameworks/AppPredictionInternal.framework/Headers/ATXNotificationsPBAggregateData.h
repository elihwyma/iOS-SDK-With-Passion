/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <ProtocolBuffer/PBCodable.h>

@interface ATXNotificationsPBAggregateData : PBCodable

{
    int _appsAllowed;
    int _appsAllowedThird;
    int _appsDenied;
    int _appsDeniedThird;
    int _appsInstalled;
    int _appsInstalledThird;
    int _appsLockscreen;
    int _appsLockscreenThird;
    struct {
        unsigned int appsAllowed:1;
        unsigned int appsAllowedThird:1;
        unsigned int appsDenied:1;
        unsigned int appsDeniedThird:1;
        unsigned int appsInstalled:1;
        unsigned int appsInstalledThird:1;
        unsigned int appsLockscreen:1;
        unsigned int appsLockscreenThird:1;
    } _has;
}

@property (nonatomic) _Bool hasAppsInstalled;
@property (nonatomic) int appsInstalled;
@property (nonatomic) _Bool hasAppsAllowed;
@property (nonatomic) int appsAllowed;
@property (nonatomic) _Bool hasAppsDenied;
@property (nonatomic) int appsDenied;
@property (nonatomic) _Bool hasAppsLockscreen;
@property (nonatomic) int appsLockscreen;
@property (nonatomic) _Bool hasAppsInstalledThird;
@property (nonatomic) int appsInstalledThird;
@property (nonatomic) _Bool hasAppsAllowedThird;
@property (nonatomic) int appsAllowedThird;
@property (nonatomic) _Bool hasAppsDeniedThird;
@property (nonatomic) int appsDeniedThird;
@property (nonatomic) _Bool hasAppsLockscreenThird;
@property (nonatomic) int appsLockscreenThird;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
