/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSDictionary, NSNumber;

@interface DOCUserInterfaceState : NSObject

{
    NSData *_mostRecentlyVisitedLocation;
    NSData *_mostRecentEffectiveRootLocation;
    NSNumber *_displayMode;
    NSDictionary *_sortingMode;
    NSNumber *_browseTabSelected;
    NSDate *_lastUpdatedDate;
}

@property (retain, nonatomic) NSDate *lastUpdatedDate;
@property (retain, nonatomic) NSData *mostRecentlyVisitedLocation;
@property (retain, nonatomic) NSData *mostRecentEffectiveRootLocation;
@property (retain, nonatomic) NSNumber *displayMode;
@property (retain, nonatomic) NSDictionary *sortingMode;
@property (retain, nonatomic) NSNumber *browseTabSelected;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)bumpLastUpdatedDate;

@end
