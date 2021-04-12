//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData, NSDate, NSDictionary, NSNumber;

@interface DOCUserInterfaceState : NSObject <NSCopying, NSSecureCoding>
{
    NSData *_mostRecentlyVisitedLocation;
    NSData *_mostRecentEffectiveRootLocation;
    NSNumber *_displayMode;
    NSDictionary *_sortingMode;
    NSNumber *_browseTabSelected;
    NSDate *_lastUpdatedDate;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSDate *lastUpdatedDate; // @synthesize lastUpdatedDate=_lastUpdatedDate;
@property(retain, nonatomic) NSNumber *browseTabSelected; // @synthesize browseTabSelected=_browseTabSelected;
@property(retain, nonatomic) NSDictionary *sortingMode; // @synthesize sortingMode=_sortingMode;
@property(retain, nonatomic) NSNumber *displayMode; // @synthesize displayMode=_displayMode;
@property(retain, nonatomic) NSData *mostRecentEffectiveRootLocation; // @synthesize mostRecentEffectiveRootLocation=_mostRecentEffectiveRootLocation;
@property(retain, nonatomic) NSData *mostRecentlyVisitedLocation; // @synthesize mostRecentlyVisitedLocation=_mostRecentlyVisitedLocation;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)bumpLastUpdatedDate;
- (id)init;

@end

