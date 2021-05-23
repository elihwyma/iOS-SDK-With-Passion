/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WFHotspotHelperNetwork : NSObject

{
    NSString *_ssid;
    NSString *_password;
    NSString *_label;
    NSString *_bundleIdentifier;
}

@property (copy, nonatomic) NSString *ssid;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *bundleIdentifier;

- (id)description;
- (id)initWithSSID:(id)arg1 bundleIdentifier:(id)arg2 password:(id)arg3 label:(id)arg4;

@end
