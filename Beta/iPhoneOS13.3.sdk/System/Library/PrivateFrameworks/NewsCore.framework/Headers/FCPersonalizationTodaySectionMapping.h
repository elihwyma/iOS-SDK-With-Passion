/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NTPBTodaySectionsMapping;

@interface FCPersonalizationTodaySectionMapping : NSObject

{
    NTPBTodaySectionsMapping *_pbTodaySectionMapping;
    NSDictionary *_todaySectionIdentifiersToFRGroupViewExposureTypes;
}

@property (retain, nonatomic) NSDictionary *todaySectionIdentifiersToFRGroupViewExposureTypes;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPBTodaySectionMapping:(id)arg1;
- (id)groupViewExposureTypesForTodaySectionIdentifier:(id)arg1;

@end
