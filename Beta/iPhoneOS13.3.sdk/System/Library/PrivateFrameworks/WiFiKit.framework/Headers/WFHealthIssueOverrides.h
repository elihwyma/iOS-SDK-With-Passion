/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <Foundation/NSObject.h>

@interface WFHealthIssueOverrides : NSObject

{
    _Bool _noInternetConnection;
    _Bool _hiddenNetwork;
    _Bool _commonSSID;
    _Bool _legacyPHY;
    _Bool _carrierNetwork;
    long long _securityOverride;
}

@property (nonatomic) _Bool noInternetConnection;
@property (nonatomic) _Bool hiddenNetwork;
@property (nonatomic) _Bool commonSSID;
@property (nonatomic) _Bool legacyPHY;
@property (nonatomic) _Bool carrierNetwork;
@property (nonatomic) long long securityOverride;

@end
