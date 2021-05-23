/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
 */

#import <Foundation/NSObject.h>

@interface CardDAVPropertiesHelper : NSObject

+ (_Bool)updateSyncDict:(id)arg1 withDAVContainer:(id)arg2;
+ (long long)maxImageSizeFromSyncDict:(id)arg1;
+ (long long)maxResourceSizeFromSyncDict:(id)arg1;

@end
