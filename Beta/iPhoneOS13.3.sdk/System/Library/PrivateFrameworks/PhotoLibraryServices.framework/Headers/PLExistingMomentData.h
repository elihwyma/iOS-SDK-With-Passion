/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDateInterval;

@protocol NSCopying;

@interface PLExistingMomentData : NSObject

{
    NSObject<NSCopying> *_objectID;
    unsigned long long _numberOfAssets;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDateInterval *_dateInterval;
}

@property (nonatomic, readonly) NSObject<NSCopying> *objectID;
@property (nonatomic, readonly) unsigned long long numberOfAssets;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSDateInterval *dateInterval;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithMoment:(id)arg1;
- (void)registerAsset:(id)arg1;

@end
