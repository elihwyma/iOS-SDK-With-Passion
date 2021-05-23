/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class CNPostalAddress, NSString, PLRevGeoCompoundNameInfo, PLRevGeoMapItem;

@interface PLRevGeoLocationInfo : NSObject

{
    _Bool _isHome;
    PLRevGeoMapItem *_mapItem;
    CNPostalAddress *_postalAddress;
    NSString *_addressString;
    NSString *_countryCode;
    NSString *_geoServiceProvider;
    PLRevGeoCompoundNameInfo *_compoundNameInfo;
    PLRevGeoCompoundNameInfo *_compoundSecondaryNameInfo;
}

@property (nonatomic, readonly) PLRevGeoMapItem *mapItem;
@property (nonatomic, readonly) CNPostalAddress *postalAddress;
@property (nonatomic, readonly) NSString *addressString;
@property (nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) NSString *geoServiceProvider;
@property (nonatomic, readonly) PLRevGeoCompoundNameInfo *compoundNameInfo;
@property (nonatomic, readonly) PLRevGeoCompoundNameInfo *compoundSecondaryNameInfo;
@property (nonatomic) _Bool isHome;

+ (_Bool)supportsSecureCoding;
+ (_Bool)isInvalidWithCoder:(id)arg1;
+ (id)_namingOrderForAssetDetailedReverseGeoDescription;
+ (id)_namingOrderForAssetReverseGeoDescription;
+ (id)newDataFromRevGeoLocationInfo:(id)arg1;
+ (id)_newRevGeoLocationInfoFromData:(id)arg1;
+ (id)infoFromPlistData:(id)arg1;
+ (_Bool)isInvalidWithPlistData:(id)arg1;
+ (id)countryCodeWithGEOMapItem:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)localizedDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasLocation;
- (id)plistData;
- (id)initWithMapItem:(id)arg1 postalAddress:(id)arg2 addressString:(id)arg3 countryCode:(id)arg4 compoundNameInfo:(id)arg5 compoundSecondaryNameInfo:(id)arg6 isHome:(_Bool)arg7 geoServiceProvider:(id)arg8;
- (_Bool)hasMapItem;
- (id)placeNamesForLocalizedDetailedDescription;
- (id)placeWithAnnotation:(id)arg1;
- (_Bool)locationWasResolvedWithBestRevGeoProvider;
- (id)initWithGEOMapItem:(id)arg1;

@end
