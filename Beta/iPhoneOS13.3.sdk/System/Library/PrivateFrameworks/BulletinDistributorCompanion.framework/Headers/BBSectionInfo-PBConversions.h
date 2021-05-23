/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <BulletinBoard/BBSectionInfo.h>

@interface BBSectionInfo (PBConversions)

- (void)setDisplayName:(id)arg1;
- (void)setIcon:(id)arg1;
- (id)dataProviderIDs;
- (id)factorySectionID;
- (void)setFactorySectionID:(id)arg1;
- (void)setSubsections:(id)arg1;
- (void)setDataProviderIDs:(id)arg1;
- (void)enableAlertsForGizmo:(_Bool)arg1;
- (void)updateAlertingStatusForGizmoWithAlertsEnabled:(_Bool)arg1 NCEnabled:(_Bool)arg2;
- (_Bool)blt_overrideShowsAlerts;
- (_Bool)blt_overrideSendToNotificationCenter;
- (void)bltApplyNotificationLevel:(unsigned long long)arg1;

@end
