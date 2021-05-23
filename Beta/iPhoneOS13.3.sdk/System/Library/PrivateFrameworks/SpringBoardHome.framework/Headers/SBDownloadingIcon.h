/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/SBLeafIcon.h>

@class NSString;

@protocol SBDownloadingIconDataSource;

@interface SBDownloadingIcon : SBLeafIcon

{
    _Bool _uninstalledByUser;
    id <SBDownloadingIconDataSource> _downloadingIconDataSource;
}

@property (nonatomic, readonly) id <SBDownloadingIconDataSource> downloadingIconDataSource;
@property (nonatomic) _Bool uninstalledByUser;
@property (copy, nonatomic, readonly) NSString *realDisplayName;

+ (id)leafIdentifierForApplicationPlaceholderBundleID:(id)arg1;
+ (id)applicationPlaceholderBundleIDForDownloadingIconLeafIdentifier:(id)arg1;
+ (_Bool)isDownloadingIconLeafIdentifier:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)cancelDownload;
- (void)setDownloadingIconDataSource:(id)arg1;
- (id)initWithDownloadingIconDataSource:(id)arg1;
- (void)reloadForStatusChange;
- (id)uninstallAlertBody;
- (id)descriptionForLocation:(id)arg1;
- (_Bool)isDownloadingIcon;

@end
