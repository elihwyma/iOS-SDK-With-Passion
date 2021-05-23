/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class CLLocation, NSArray, NSDate, NSDictionary, PXContextualMemoriesLocationSetting, PXContextualMemoriesPeopleSetting, PXContextualMemoriesTimeSetting;

@interface PXContextualMemoriesSettings : NSObject

{
    NSDictionary *_extraParameters;
    PXContextualMemoriesTimeSetting *_timeSetting;
    PXContextualMemoriesLocationSetting *_locationSetting;
    PXContextualMemoriesPeopleSetting *_peopleSetting;
    NSArray *_settings;
}

@property (nonatomic, readonly) PXContextualMemoriesTimeSetting *timeSetting;
@property (nonatomic, readonly) PXContextualMemoriesLocationSetting *locationSetting;
@property (nonatomic, readonly) PXContextualMemoriesPeopleSetting *peopleSetting;
@property (nonatomic, readonly) NSArray *settings;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) NSArray *peopleNames;
@property (copy, nonatomic) NSDictionary *extraParameters;

- (id)init;

@end
