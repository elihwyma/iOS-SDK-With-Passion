/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUBrillianceAdjustmentCustomBehavior : NSObject

{
    _Bool _calculatingStatistics;
}

@property _Bool calculatingStatistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dataSource:(id)arg1 adjustmentInfo:(id)arg2 setEnabled:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)dataSource:(id)arg1 adjustmentInfo:(id)arg2 modifyValue:(double)arg3;
- (void)populateSmartToneStatisticsForDataSource:(id)arg1 adjustmentInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
