/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@interface PSCloudStorageQuotaManager : NSObject

+ (id)sharedManager;

- (void)getQuotaInfoForPrimaryAccountCompletion:(CDUnknownBlockType)arg1;

@end
