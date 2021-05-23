/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NEHotspotNetwork : NSObject

{
    struct __CNNetwork *_network;
}

@property struct __CNNetwork *network;
@property (readonly) NSString *interfaceName;
@property (readonly) NSString *SSID;
@property (readonly) NSString *BSSID;
@property (readonly) double signalStrength;
@property (readonly, getter=isSecure) _Bool secure;
@property (readonly, getter=didAutoJoin) _Bool autoJoined;
@property (readonly, getter=didJustJoin) _Bool justJoined;
@property (readonly, getter=isChosenHelper) _Bool chosenHelper;

- (void)dealloc;
- (id)description;
- (void)setPassword:(id)arg1;
- (void)setConfidence:(long long)arg1;
- (id)initWithNetwork:(struct __CNNetwork *)arg1;

@end
