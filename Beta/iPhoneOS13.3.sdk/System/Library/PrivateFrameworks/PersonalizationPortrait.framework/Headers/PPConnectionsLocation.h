/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

#import <NSObject.h>

@class NSDate, NSDictionary, NSNumber, NSString, NSURL;

@interface PPConnectionsLocation : NSObject

{
    _Bool _copiedToPasteboard;
    _Bool _shouldAggregate;
    NSString *_name;
    NSString *_originatingBundleID;
    NSString *_fullFormattedAddress;
    NSString *_thoroughfare;
    NSString *_subThoroughfare;
    NSString *_locality;
    NSString *_administrativeArea;
    NSString *_postalCode;
    NSString *_country;
    NSNumber *_latitude;
    NSNumber *_longitude;
    NSURL *_originatingWebsiteURL;
    NSURL *_mapItemURL;
    NSString *_label;
    NSString *_value;
    NSString *_shortValue;
    NSString *_documentID;
    NSDictionary *_addressComponents;
    NSString *_source;
    NSString *_trigger;
    NSDate *_createdAt;
    NSNumber *_lifetime;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *originatingBundleID;
@property (copy, nonatomic) NSString *fullFormattedAddress;
@property (copy, nonatomic) NSString *thoroughfare;
@property (copy, nonatomic) NSString *subThoroughfare;
@property (copy, nonatomic) NSString *locality;
@property (copy, nonatomic) NSString *administrativeArea;
@property (copy, nonatomic) NSString *postalCode;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSNumber *latitude;
@property (copy, nonatomic) NSNumber *longitude;
@property (copy, nonatomic) NSURL *originatingWebsiteURL;
@property (copy, nonatomic) NSURL *mapItemURL;
@property (nonatomic) _Bool copiedToPasteboard;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *shortValue;
@property (nonatomic) _Bool shouldAggregate;
@property (copy, nonatomic) NSString *documentID;
@property (copy, nonatomic) NSDictionary *addressComponents;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *trigger;
@property (copy, nonatomic) NSDate *createdAt;
@property (copy, nonatomic) NSNumber *lifetime;

+ (_Bool)supportsSecureCoding;
+ (unsigned long long)round:(double)arg1 toNearest:(double)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)addressDictionary;
- (id)quickTypeItem;
- (unsigned char)_pexItemSource;
- (unsigned long long)_roundedPredictionAge;
- (_Bool)isEqualToConnectionsLocation:(id)arg1;

@end
