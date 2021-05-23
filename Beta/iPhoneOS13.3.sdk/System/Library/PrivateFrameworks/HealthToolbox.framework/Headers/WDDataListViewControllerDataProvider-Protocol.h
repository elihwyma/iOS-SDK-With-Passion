/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthToolbox/Swift-Protocol.h>

@class NSPredicate;

@protocol WDDataListViewControllerDataProvider <Swift>

@property (retain, nonatomic) NSPredicate *defaultQueryPredicate;
@property (nonatomic, readonly) long long cellStyle;
@property (nonatomic, readonly) unsigned long long numberOfSections;
@property (nonatomic, readonly) _Bool textAdjustsFontSizeToFitWidth;
@property (nonatomic, readonly) double customCellHeight;
@property (nonatomic, readonly) double customEstimatedCellHeight;
@property (readonly) _Bool hasCompleteDataSet;
@property (readonly) _Bool calendarDateSelectorVisible;

- (unsigned short)titleForSection: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteAllData;
- (unsigned short)stopCollectingData;
- (unsigned short)initWithDisplayType:profile: /* Error: Ran out of types for this method. */;
- (unsigned short)textForObject: /* Error: Ran out of types for this method. */;
- (unsigned short)customCellForObject:indexPath:tableView: /* Error: Ran out of types for this method. */;
- (unsigned short)numberOfObjectsForSection: /* Error: Ran out of types for this method. */;
- (unsigned short)customizeTableView: /* Error: Ran out of types for this method. */;
- (unsigned short)objectAtIndex:forSection: /* Error: Ran out of types for this method. */;
- (unsigned short)viewControllerForItemAtIndexPath: /* Error: Ran out of types for this method. */;
- (unsigned short)secondaryTextForObject: /* Error: Ran out of types for this method. */;
- (unsigned short)removeObjectAtIndex:forSection:sectionRemoved: /* Error: Ran out of types for this method. */;
- (unsigned short)startCollectingDataWithUpdateHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)viewControllerIsNearEndOfScreen;
- (unsigned short)deleteObjectsAtIndexPath:healthStore:options:completion: /* Error: Ran out of types for this method. */;

@end
