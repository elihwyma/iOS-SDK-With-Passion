/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBNotificationCenterDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, readonly) _Bool useDuetRecommendations;
@property (nonatomic, readonly, getter=isBatteryWidgetAlwaysAvailable) _Bool batteryWidgetAlwaysAvailable;
@property (nonatomic, readonly) _Bool showInternalWidgets;
@property (nonatomic, readonly, getter=isWidgetSnapshottingEnabled) _Bool widgetSnapshottingEnabled;
@property (nonatomic) _Bool didPurgeNonCAMLSnapshots;
@property (nonatomic) _Bool didPurgeNonASTCSnapshots;
@property (nonatomic, readonly, getter=isWidgetLoggingEnabled) _Bool widgetLoggingEnabled;
@property (nonatomic, readonly) _Bool showWidgetSnapshotDebugLabels;

- (void)_bindAndRegisterDefaults;

@end
