/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class BLTSectionInfoList;

@interface BLTNotificationEnabledSettingsLogger : NSObject

{
    double _lastLogTime;
    BLTSectionInfoList *_sectionInfoList;
}

@property (retain, nonatomic) BLTSectionInfoList *sectionInfoList;

+ (id)sharedNotificationEnabledSettingsLogger:(id)arg1;

- (id)init;
- (void)_log;
- (void)_performActivity:(id)arg1;
- (void)_registerActivity;

@end
