/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSMutableArray, WLMigrationDataCoordinator, WLSQLController, WLSourceDevice, WLSourceDeviceMigrationMetadata, WLStatistics, WLTimeEstimateAccuracyTracker, WLURLSessionController;

@protocol WLDataMigrationDelegate, WLMigrationDataSource;

@interface WLMigrationContext : NSObject

{
    WLSourceDevice *_sourceDevice;
    id <WLDataMigrationDelegate> _delegate;
    const void *_powerAssertion;
    id <WLMigrationDataSource> _dataSource;
    WLMigrationDataCoordinator *_dataCoordinator;
    WLSQLController *_sqlController;
    NSMutableArray *_migrators;
    unsigned long long _expectedDownloadSegmentsRemaining;
    unsigned long long _completedDownloadSegmentCount;
    unsigned long long _expectedDownloadSegmentsRemainingForItemsWithEstimatedSizes;
    unsigned long long _expectedDownloadBytesRemainingForItemsWithConcreteSizes;
    double _progress;
    double _lastProgressSentToAndroidDevice;
    NSDate *_throughputSegmentStartDate;
    NSMutableArray *_throughputSamples;
    unsigned long long _throughputBytesInCurrentPeriod;
    unsigned long long _throughputSegmentsInCurrentPeriod;
    WLTimeEstimateAccuracyTracker *_timeEstimateAccuracyTracker;
    WLURLSessionController *_urlSessionController;
    WLStatistics *_aggregateStatistics;
    WLSourceDeviceMigrationMetadata *_metadata;
    NSArray *_importErrors;
}

@property (retain, nonatomic) WLSourceDevice *sourceDevice;
@property (retain, nonatomic) id <WLDataMigrationDelegate> delegate;
@property (nonatomic) const void *powerAssertion;
@property (retain, nonatomic) id <WLMigrationDataSource> dataSource;
@property (retain, nonatomic) WLMigrationDataCoordinator *dataCoordinator;
@property (retain, nonatomic) WLSQLController *sqlController;
@property (retain, nonatomic) NSMutableArray *migrators;
@property (nonatomic) unsigned long long expectedDownloadSegmentsRemaining;
@property (nonatomic) unsigned long long completedDownloadSegmentCount;
@property (nonatomic) unsigned long long expectedDownloadSegmentsRemainingForItemsWithEstimatedSizes;
@property (nonatomic) unsigned long long expectedDownloadBytesRemainingForItemsWithConcreteSizes;
@property (nonatomic) double progress;
@property (nonatomic) double lastProgressSentToAndroidDevice;
@property (retain, nonatomic) NSDate *throughputSegmentStartDate;
@property (retain, nonatomic) NSMutableArray *throughputSamples;
@property (nonatomic) unsigned long long throughputBytesInCurrentPeriod;
@property (nonatomic) unsigned long long throughputSegmentsInCurrentPeriod;
@property (retain, nonatomic) WLTimeEstimateAccuracyTracker *timeEstimateAccuracyTracker;
@property (retain, nonatomic) WLURLSessionController *urlSessionController;
@property (retain, nonatomic) WLStatistics *aggregateStatistics;
@property (retain, nonatomic) WLSourceDeviceMigrationMetadata *metadata;
@property (retain, nonatomic) NSArray *importErrors;

@end
