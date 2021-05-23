/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/SBIcon.h>

@class NSMutableSet, NSString;

@protocol SBLeafIconDataSource;

@interface SBLeafIcon : SBIcon

{
    NSString *_leafIdentifier;
    NSString *_applicationBundleID;
    NSMutableSet *_dataSources;
    id <SBLeafIconDataSource> _activeDataSource;
    id <SBLeafIconDataSource> _dataSourceAtUninstallation;
}

@property (copy, nonatomic, readonly) NSString *applicationBundleID;
@property (copy, nonatomic, readonly) NSString *masqueradeIdentifier;
@property (nonatomic, readonly) id <SBLeafIconDataSource> activeDataSource;

+ (Class)downloadingIconClass;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)nodeIdentifier;
- (long long)progressState;
- (_Bool)isTimedOut;
- (_Bool)isLaunchEnabled;
- (_Bool)isLaunchDisabledForObscuredReason;
- (id)displayNameForObscuredDisabledLaunchForLocation:(id)arg1;
- (long long)labelAccessoryType;
- (long long)accessoryTypeForLocation:(id)arg1;
- (void)launchFromLocation:(id)arg1 context:(id)arg2;
- (_Bool)isProgressPaused;
- (double)progressPercent;
- (id)initWithLeafIdentifier:(id)arg1 applicationBundleID:(id)arg2;
- (void)_noteActiveDataSourceDidChangeAndReloadIcon:(_Bool)arg1;
- (void)removeIconDataSource:(id)arg1;
- (void)addIconDataSource:(id)arg1;
- (id)displayNameForLocation:(id)arg1;
- (_Bool)isLeafIcon;
- (id)leafIdentifier;
- (void)setUninstalled;
- (void)completeUninstall;
- (id)unmaskedIconImageWithInfo:(struct SBIconImageInfo)arg1;
- (id)genericIconImageWithInfo:(struct SBIconImageInfo)arg1;
- (void)_noteActiveDataSourceDidChangeNotification:(id)arg1;
- (void)_noteActiveDataSourceDidGenerateImageNotification:(id)arg1;
- (void)_noteDataSourceDidInvalidateNotification:(id)arg1;
- (void)_updateActiveDataSource;
- (id)generateIconImageWithInfo:(struct SBIconImageInfo)arg1;
- (_Bool)canTruncateLabel;
- (_Bool)canTightenLabel;
- (id)badgeNumberOrString;
- (id)accessoryTextForLocation:(id)arg1;
- (void)removeIconDataSourcesOfClass:(Class)arg1;
- (_Bool)isUninstallSupported;

@end
