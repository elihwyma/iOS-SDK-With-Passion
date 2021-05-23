/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSSet, PLRoutineService;

@interface PLFrequentLocationManager : NSObject

{
    NSSet *_currentFrequentLocations;
    PLRoutineService *_routineManager;
}

@property (retain, nonatomic) PLRoutineService *routineManager;
@property (retain, nonatomic) NSSet *currentFrequentLocations;

- (id)init;
- (_Bool)frequentLocationsDidChangeFromUpdateWithAllMoments:(id)arg1;
- (id)_createFrequentLocationsWithAllMoments:(id)arg1;

@end
