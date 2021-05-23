/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MKWebBridgeConfiguration : NSObject

{
    NSString *_bridgeVersion;
    NSString *_nativeControllerName;
    NSString *_webControllerName;
}

@property (copy, nonatomic, readonly) NSString *bridgeVersion;
@property (copy, nonatomic, readonly) NSString *nativeControllerName;
@property (copy, nonatomic, readonly) NSString *webControllerName;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNativeControllerName:(id)arg1 webControllerName:(id)arg2 bridgeVersion:(id)arg3;

@end
