/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDateInterval, NSString;

@interface PXBrowserVisibleContentSnapshot : NSObject

{
    unsigned long long _dateIntervalGranularity;
    NSArray *_locationNames;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDateInterval *dateInterval;
@property (nonatomic, readonly) NSArray *locationNames;
@property (nonatomic, readonly) unsigned long long dateIntervalGranularity;
@property (nonatomic, readonly) NSString *localizedPlaceholderText;

+ (id)snapshotWithIndexPaths:(id)arg1 dataSource:(id)arg2 dateIntervalGranularity:(unsigned long long)arg3;
+ (id)snapshotWithIndexPaths:(id)arg1 dataSource:(id)arg2 dateIntervalGranularity:(unsigned long long)arg3 dateType:(unsigned long long)arg4;

- (id)init;
- (id)initWithDateIntervalGranularity:(unsigned long long)arg1;

@end
