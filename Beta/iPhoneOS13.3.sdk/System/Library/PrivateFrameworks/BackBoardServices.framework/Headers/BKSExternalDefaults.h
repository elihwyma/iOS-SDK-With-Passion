/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <BackBoardServices/BKSAbstractDefaults.h>

@class BKSIAPDefaults, BKSLockdownDefaults, BKSPersistentConnectionDefaults, BKSSpringBoardDefaults;

@interface BKSExternalDefaults : BKSAbstractDefaults

{
    BKSLockdownDefaults *_lazy_lockdownDefaults;
    BKSIAPDefaults *_lazy_iapDefaults;
    BKSPersistentConnectionDefaults *_lazy_persistentConnectionDefaults;
    BKSSpringBoardDefaults *_lazy_springBoardDefaults;
}

@property (retain, nonatomic, readonly) BKSLockdownDefaults *lockdownDefaults;
@property (retain, nonatomic, readonly) BKSIAPDefaults *iapDefaults;
@property (retain, nonatomic, readonly) BKSPersistentConnectionDefaults *persistentConnectionDefaults;
@property (retain, nonatomic, readonly) BKSSpringBoardDefaults *springBoardDefaults;

@end
