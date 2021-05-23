/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface WFDevice : NSObject

{
    NSArray *_capabilities;
}

@property (nonatomic, readonly) struct CGRect screenBounds;
@property (nonatomic, readonly) double screenScale;
@property (nonatomic, readonly) NSString *systemVersion;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSString *localizedModel;
@property (nonatomic, readonly) NSString *systemName;
@property (nonatomic, readonly) long long idiom;
@property (nonatomic, readonly) long long platform;
@property (nonatomic, readonly) NSArray *capabilities;
@property (nonatomic, readonly) NSString *localizedWiFiDisplayName;
@property (nonatomic, readonly) NSString *marketingName;
@property (nonatomic, readonly) long long chipID;

+ (id)currentDevice;

- (id)_deviceInfoForKey:(struct __CFString *)arg1;
- (_Bool)hasCapability:(id)arg1;

@end
