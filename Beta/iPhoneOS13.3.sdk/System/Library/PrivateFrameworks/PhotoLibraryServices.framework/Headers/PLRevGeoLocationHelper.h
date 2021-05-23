/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLRevGeoLocationHelper : NSObject

+ (_Bool)isCurrentRevGeoProviderAutoNavi;
+ (_Bool)isAutoNaviRevGeoProvider:(id)arg1;
+ (_Bool)isAutoNaviCountryCode:(id)arg1;
+ (id)currentRevGeoProvider;
+ (id)autoNaviCountryCode;
+ (id)autoNaviProviderID;
+ (id)appleProviderID;
+ (void)simulateAutoNaviForBlock:(CDUnknownBlockType)arg1;

@end
