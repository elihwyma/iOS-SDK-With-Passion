/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@interface BLTAlertStateTester : NSObject

{
    CDUnknownBlockType _sectionInfoRetriever;
}

@property (copy, nonatomic) CDUnknownBlockType sectionInfoRetriever;

- (_Bool)isScreenTimeBlockedForBundleIdentifier:(id)arg1;
- (unsigned long long)_blockingReasonForSectionInfo:(id)arg1;
- (unsigned long long)willNanoPresentNotificationForSectionInfo:(id)arg1 subsectionIDs:(id)arg2 isWristDetectDisabled:(_Bool)arg3 hasSectionIDOptedOutOfCoordination:(_Bool)arg4 hasSectionIDOptedForwardOnly:(_Bool)arg5;

@end
