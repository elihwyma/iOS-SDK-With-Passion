//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSArray;

@interface SAWeatherLocationSearchCompleted : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)locationSearchCompletedWithWeatherLocations:(id)arg1;
+ (id)locationSearchCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)locationSearchCompleted;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSArray *weatherLocations;
- (id)initWithWeatherLocations:(id)arg1;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

