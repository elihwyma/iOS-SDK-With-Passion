/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class CLLocation, NSArray, NSDate, PGManager;

@interface PGFeatureVectorGenerator : NSObject

{
    _Bool _isDryTesting;
    NSDate *_localDate;
    CLLocation *_location;
    NSArray *_peopleNames;
    PGManager *_manager;
}

@property _Bool isDryTesting;
@property (retain, nonatomic) NSDate *localDate;
@property (retain, nonatomic) CLLocation *location;
@property (copy, nonatomic) NSArray *peopleNames;
@property (weak, readonly) PGManager *manager;

+ (id)_calendarEventsBetweenDate:(id)arg1 andDate:(id)arg2 atLocation:(id)arg3 withPeopleUUIDs:(id)arg4 inPhotoLibrary:(id)arg5;

- (id)initWithManager:(id)arg1;
- (void)enumerateFeatureVectorsByTypeUsingBlock:(CDUnknownBlockType)arg1;

@end
