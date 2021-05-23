/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class GEOComposedWaypoint, NSData, NSDate, NSString;

@interface MNCommuteDestinationSuggestion : NSObject

{
    _Bool _allDay;
    NSData *_rawSuggestion;
    NSString *_uniqueIdentifier;
    unsigned long long _type;
    NSString *_name;
    GEOComposedWaypoint *_waypoint;
    double _weight;
    NSDate *_expires;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (retain, nonatomic) NSData *rawSuggestion;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) GEOComposedWaypoint *waypoint;
@property (nonatomic) double weight;
@property (copy, nonatomic) NSDate *expires;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (nonatomic, getter=isAllDay) _Bool allDay;

+ (_Bool)supportsSecureCoding;
+ (void)_setupFakes;
+ (id)_fakeBitsAndPiecesForSuggestion:(id)arg1;
+ (id)fakeDestinationSuggestion:(id)arg1;
+ (void)fakeDestinationSuggestion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)fakeDestinationSuggestions;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
