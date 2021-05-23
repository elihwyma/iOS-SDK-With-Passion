/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDDaemon, HDDataCollectionManager, HDDeviceManager, HDSourceManager, HDUserCharacteristicsManager;

@protocol HDHealthDaemon, HDHealthDatabase;

@interface HDMockProfile : NSObject

{
    id <HDHealthDatabase> healthDatabase;
    HDSourceManager *healthSourceManager;
    HDDeviceManager *healthDeviceManager;
    HDDaemon *daemon;
    id <HDHealthDaemon> _healthDaemon;
    HDDataCollectionManager *_dataCollectionManager;
    HDUserCharacteristicsManager *_userCharacteristicsManager;
}

@property (weak, nonatomic) HDDaemon *daemon;
@property (weak, nonatomic) id <HDHealthDaemon> healthDaemon;
@property (retain, nonatomic) id <HDHealthDatabase> healthDatabase;
@property (retain, nonatomic) HDSourceManager *healthSourceManager;
@property (retain, nonatomic) HDDeviceManager *healthDeviceManager;
@property (retain, nonatomic) HDDataCollectionManager *dataCollectionManager;
@property (retain, nonatomic) HDUserCharacteristicsManager *userCharacteristicsManager;

@end
