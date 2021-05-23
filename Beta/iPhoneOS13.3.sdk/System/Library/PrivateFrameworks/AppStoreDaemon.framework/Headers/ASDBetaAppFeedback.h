/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class ASDBetaAppVersion, NSArray, NSString;

@interface ASDBetaAppFeedback : NSObject <Swift>

{
    unsigned int _batteryPercentage;
    unsigned int _screenHeight;
    unsigned int _screenWidth;
    NSString *_comments;
    NSString *_email;
    NSArray *_imagesData;
    NSString *_incidentID;
    unsigned long long _timestamp;
    unsigned long long _appUptime;
    ASDBetaAppVersion *_appVersion;
    NSString *_bundleID;
    NSString *_pairedWatchModel;
    NSString *_pairedWatchOSVersion;
    NSString *_itemID;
    NSString *_architecture;
    NSString *_carrier;
    NSString *_cellularNetworkType;
    NSString *_deviceType;
    unsigned long long _diskAvailable;
    unsigned long long _diskTotal;
    NSString *_locale;
    NSString *_networkConnectionType;
    NSString *_osVersion;
    NSString *_timeZone;
}

@property (copy) NSString *comments;
@property (copy) NSString *email;
@property (copy) NSArray *imagesData;
@property (copy) NSString *incidentID;
@property unsigned long long timestamp;
@property unsigned long long appUptime;
@property (copy) ASDBetaAppVersion *appVersion;
@property (copy) NSString *bundleID;
@property (copy) NSString *pairedWatchModel;
@property (copy) NSString *pairedWatchOSVersion;
@property (copy) NSString *itemID;
@property (copy) NSString *architecture;
@property unsigned int batteryPercentage;
@property (copy) NSString *carrier;
@property (copy) NSString *cellularNetworkType;
@property (copy) NSString *deviceType;
@property unsigned long long diskAvailable;
@property unsigned long long diskTotal;
@property (copy) NSString *locale;
@property (copy) NSString *networkConnectionType;
@property (copy) NSString *osVersion;
@property unsigned int screenHeight;
@property unsigned int screenWidth;
@property (copy) NSString *timeZone;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
