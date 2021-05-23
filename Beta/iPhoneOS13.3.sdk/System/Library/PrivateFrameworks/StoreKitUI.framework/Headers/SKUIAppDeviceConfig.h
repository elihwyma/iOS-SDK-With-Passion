/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SKUIAppDeviceConfig : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)timeZone;
- (struct CGSize)screenSize;
- (unsigned long long)preferredVideoFormat;
- (unsigned long long)preferredVideoPreviewFormat;
- (id)systemLanguage;
- (id)storeFrontCountryCode;
- (_Bool)isTimeZoneSet;
- (id)currentSizeClasses;

@end
