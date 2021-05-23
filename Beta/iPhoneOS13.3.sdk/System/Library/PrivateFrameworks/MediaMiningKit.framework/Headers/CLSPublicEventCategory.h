/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface CLSPublicEventCategory : NSObject

{
    NSString *_category;
    NSString *_localizedName;
    NSArray *_localizedSubcategories;
}

@property (retain, nonatomic) NSString *localizedName;
@property (retain, nonatomic) NSArray *localizedSubcategories;
@property (nonatomic, readonly) NSString *category;

+ (_Bool)supportsSecureCoding;
+ (id)theater;
+ (id)musicConcerts;
+ (id)nightLife;
+ (id)dance;
+ (id)festivalsAndFairs;
+ (id)artsAndMuseums;
+ (id)sports;
+ (id)businessAndTechnology;
+ (id)community;
+ (id)educational;
+ (id)familyEvents;
+ (id)tours;
+ (id)appleEvents;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCategory:(id)arg1;
- (unsigned long long)levelForLocalizedSubcategory:(id)arg1;

@end
