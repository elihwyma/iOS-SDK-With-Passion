/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@class NSString;

@interface _DPReportFilesMaintainer : NSObject

{
    NSString *_reportsDirectoryPath;
}

@property (copy, nonatomic) NSString *reportsDirectoryPath;

+ (id)reportsInDirectory:(id)arg1;
+ (id)retiredReportsPath:(id)arg1;
+ (_Bool)removeFilesFrom:(id)arg1 olderThanSecond:(double)arg2;
+ (_Bool)retireFiles:(id)arg1 toDirectory:(id)arg2;

- (id)init;
- (id)initWithDirectoryPath:(id)arg1;
- (void)scheduleMaintenanceWithName:(id)arg1 database:(id)arg2;
- (_Bool)doMaintenance;

@end
