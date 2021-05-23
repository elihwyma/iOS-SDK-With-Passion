/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class EDAMClientSyncRateConfig, NSNumber;

@interface EDAMSyncState : FATObject

{
    NSNumber *_currentTime;
    NSNumber *_fullSyncBefore;
    NSNumber *_updateCount;
    NSNumber *_uploaded;
    NSNumber *_userLastUpdated;
    NSNumber *_userMaxMessageEventId;
    NSNumber *_businessSummaryUpdated;
    NSNumber *_communicationEngineUpdateId;
    NSNumber *_currentDevicesUsed;
    NSNumber *_showChoiceScreen;
    EDAMClientSyncRateConfig *_clientSyncRateConfig;
}

@property (retain, nonatomic) NSNumber *currentTime;
@property (retain, nonatomic) NSNumber *fullSyncBefore;
@property (retain, nonatomic) NSNumber *updateCount;
@property (retain, nonatomic) NSNumber *uploaded;
@property (retain, nonatomic) NSNumber *userLastUpdated;
@property (retain, nonatomic) NSNumber *userMaxMessageEventId;
@property (retain, nonatomic) NSNumber *businessSummaryUpdated;
@property (retain, nonatomic) NSNumber *communicationEngineUpdateId;
@property (retain, nonatomic) NSNumber *currentDevicesUsed;
@property (retain, nonatomic) NSNumber *showChoiceScreen;
@property (retain, nonatomic) EDAMClientSyncRateConfig *clientSyncRateConfig;

+ (id)structName;
+ (id)structFields;

@end
