/*
 Image: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface PSGBackupDisabledAppsInfo : NSObject

{
    _Bool _includePhoto;
    NSArray *_backupDisabledAppsForDisplay;
    long long _backupDisabledAppCount;
}

@property (retain, nonatomic) NSArray *backupDisabledAppsForDisplay;
@property (nonatomic) _Bool includePhoto;
@property (nonatomic) long long backupDisabledAppCount;

@end
