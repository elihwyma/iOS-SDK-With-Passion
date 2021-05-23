/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <CoreServices/LSApplicationProxy.h>

@interface LSApplicationProxy (MCUIMISBlockedApps)

- (_Bool)isBlacklisted;
- (_Bool)hasManagedRestrictions;
- (_Bool)isUninstalledOnMDMRemoval;
- (_Bool)isExcludedFromBackup;
- (_Bool)isUnableToExportToUnmanaged;
- (_Bool)isUnableToImportFromUnmanaged;
- (_Bool)isExcludedFromCloudSync;
- (_Bool)isUnableToUseCellData;
- (_Bool)isUnableToUseRoamingCellData;
- (_Bool)hasAppVPN;
- (id)appIconForTableCell;

@end
