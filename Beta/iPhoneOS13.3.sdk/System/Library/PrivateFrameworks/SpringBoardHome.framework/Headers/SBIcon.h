/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSArray, NSHashTable, NSString;

@protocol SBIconDelegate, SBTreeNode;

@interface SBIcon : NSObject

{
    id _badgeNumberOrString;
    NSHashTable *_observers;
    _Bool _uninstalled;
    id <SBTreeNode> _parent;
    id <SBIconDelegate> _delegate;
    NSString *_iconFileSizeDescription;
}

@property (weak, nonatomic) id <SBIconDelegate> delegate;
@property (nonatomic, readonly) _Bool shouldWarmUp;
@property (copy, nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) _Bool canTruncateLabel;
@property (nonatomic, readonly) _Bool canTightenLabel;
@property (copy, nonatomic, readonly) NSArray *tags;
@property (nonatomic, readonly) long long badgeValue;
@property (nonatomic, readonly) id badgeNumberOrString;
@property (nonatomic, readonly) NSString *iconCategoryDescription;
@property (nonatomic, readonly) NSString *iconFileSizeDescription;
@property (nonatomic, readonly) long long labelAccessoryType;
@property (nonatomic, readonly, getter=isLaunchEnabled) _Bool launchEnabled;
@property (nonatomic, readonly, getter=isLaunchDisabledForObscuredReason) _Bool launchDisabledForObscuredReason;
@property (nonatomic, readonly) long long progressState;
@property (nonatomic, readonly) double progressPercent;
@property (nonatomic, readonly, getter=isProgressPaused) _Bool progressPaused;
@property (nonatomic, readonly) _Bool shouldAnimateProgress;
@property (nonatomic, readonly, getter=isUninstalled) _Bool uninstalled;
@property (nonatomic, readonly, getter=isUninstallSupported) _Bool uninstallSupported;
@property (copy, nonatomic, readonly) NSString *uninstallAlertTitle;
@property (copy, nonatomic, readonly) NSString *uninstallAlertBody;
@property (copy, nonatomic, readonly) NSString *uninstallAlertConfirmTitle;
@property (copy, nonatomic, readonly) NSString *uninstallAlertCancelTitle;
@property (nonatomic, readonly, getter=isTimedOut) _Bool timedOut;
@property (copy, nonatomic, readonly) NSArray *folderTitleOptions;
@property (copy, nonatomic, readonly) NSString *folderFallbackTitle;
@property (nonatomic, readonly) _Bool canReceiveGrabbedIcon;
@property (nonatomic, readonly) _Bool canBeAddedToMultiItemDrag;
@property (copy, nonatomic, readonly) NSString *automationID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *children;
@property (weak, nonatomic) id <SBTreeNode> parent;
@property (copy, nonatomic, readonly) NSString *uniqueIdentifier;

+ (Class)downloadingIconClass;
+ (_Bool)hasIconImage;
+ (_Bool)canGenerateIconsInBackground;
+ (id)iconImageFromUnmaskedImage:(id)arg1 info:(struct SBIconImageInfo)arg2;
+ (_Bool)forcesBackgroundIconGeneration;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (_Bool)isPlaceholder;
- (void)setBadge:(id)arg1;
- (id)applicationBundleID;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)removeChild:(id)arg1;
- (_Bool)hasObserver:(id)arg1;
- (id)nodeIdentifier;
- (void)enumerateObserversUsingBlock:(CDUnknownBlockType)arg1;
- (id)folder;
- (void)localeChanged;
- (void)addNodeObserver:(id)arg1;
- (void)removeNodeObserver:(id)arg1;
- (_Bool)isFolderIcon;
- (_Bool)containsNodeIdentifier:(id)arg1;
- (id)iconImageWithInfo:(struct SBIconImageInfo)arg1;
- (id)displayNameForObscuredDisabledLaunchForLocation:(id)arg1;
- (Class)iconImageViewClassForLocation:(id)arg1;
- (long long)accessoryTypeForLocation:(id)arg1;
- (id)representedSceneIdentifier;
- (void)launchFromLocation:(id)arg1 context:(id)arg2;
- (id)downloadingIconDataSource;
- (id)descriptionForLocation:(id)arg1;
- (_Bool)isDownloadingIcon;
- (_Bool)assumesAppInstallFinishedForFolderProgress;
- (id)displayNameForLocation:(id)arg1;
- (_Bool)isLeafIcon;
- (id)leafIdentifier;
- (id)nodeDescriptionWithPrefix:(id)arg1;
- (_Bool)isGrabbedIconPlaceholder;
- (void)setUninstalled;
- (void)completeUninstall;
- (void)possibleUserTapBeganWithAbsoluteTime:(unsigned long long)arg1 andContinuousTime:(unsigned long long)arg2;
- (void)possibleUserTapDidCancel;
- (id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
- (id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2;
- (id)containedNodeIdentifiers;
- (long long)localizedCompareDisplayNames:(id)arg1;
- (id)unmaskedIconImageWithInfo:(struct SBIconImageInfo)arg1;
- (id)genericIconImageWithInfo:(struct SBIconImageInfo)arg1;
- (void)_notifyAccessoriesDidUpdate;
- (void)_notifyLaunchEnabledDidChange;
- (void)reloadIconImage;
- (id)generateIconImageWithInfo:(struct SBIconImageInfo)arg1;
- (id)accessoryTextForLocation:(id)arg1;
- (id)masqueradeIdentifier;
- (void)ancestryDidChange;
- (id)parentFolderIcon;
- (void)_notifyImageDidUpdate;
- (void)noteBadgeDidChange;
- (id)iconSizeDescription;

@end
