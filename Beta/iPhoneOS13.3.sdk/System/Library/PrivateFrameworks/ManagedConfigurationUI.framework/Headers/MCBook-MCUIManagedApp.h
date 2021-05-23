/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <ManagedConfiguration/MCBook.h>

@interface MCBook (MCUIManagedApp)

- (_Bool)hasManagedRestrictions;
- (_Bool)isUninstalledOnMDMRemoval;
- (_Bool)isExcludedFromBackup;
- (_Bool)isUnableToExportToUnmanaged;
- (_Bool)isExcludedFromCloudSync;
- (_Bool)isEnterpriseBook;

@end
