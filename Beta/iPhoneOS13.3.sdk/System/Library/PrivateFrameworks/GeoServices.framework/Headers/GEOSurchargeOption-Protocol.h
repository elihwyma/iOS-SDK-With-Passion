/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSArray;

@protocol GEOSurchargeType;

@protocol GEOSurchargeOption

@property (nonatomic, readonly) NSArray *surchargeTypes;
@property (nonatomic, readonly) unsigned long long selectedSurchargeTypeIndex;
@property (nonatomic, readonly) id <GEOSurchargeType> selectedSurchargeType;

@end
