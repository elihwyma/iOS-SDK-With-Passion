/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSSet;

@interface HKSourceListDataModel : NSObject

{
    NSSet *_allSources;
    NSArray *_orderedAppSources;
    NSArray *_orderedUninstalledAppSources;
    NSArray *_orderedResearchStudySources;
    NSArray *_orderedDeviceSources;
    NSArray *_orderedClinicalSources;
}

@property (copy, nonatomic, readonly) NSSet *allSources;
@property (copy, nonatomic, readonly) NSArray *orderedAppSources;
@property (copy, nonatomic, readonly) NSArray *orderedUninstalledAppSources;
@property (copy, nonatomic, readonly) NSArray *orderedResearchStudySources;
@property (copy, nonatomic, readonly) NSArray *orderedDeviceSources;
@property (copy, nonatomic, readonly) NSArray *orderedClinicalSources;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSources:(id)arg1;
- (id)initWithSourceModels:(id)arg1;
- (void)_sortSources:(id)arg1;

@end
