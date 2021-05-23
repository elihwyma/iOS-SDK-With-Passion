/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface CLSHolidayCalendarEventRuleTraits : NSObject

{
    _Bool _containsMePerson;
    unsigned long long _numberOfPeople;
    unsigned long long _peopleTrait;
    unsigned long long _locationTrait;
    NSSet *_categories;
}

@property (nonatomic) _Bool containsMePerson;
@property (nonatomic) unsigned long long numberOfPeople;
@property (nonatomic) unsigned long long peopleTrait;
@property (nonatomic) unsigned long long locationTrait;
@property (retain, nonatomic) NSSet *categories;

- (id)init;
- (id)description;

@end
