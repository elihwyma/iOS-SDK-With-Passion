/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@protocol VKCustomFeatureDataSource;

@interface VKCustomFeature : NSObject

{
    shared_ptr_e9082761 _feature;
    id <VKCustomFeatureDataSource> _dataSource;
}

+ (_Bool)supportsSecureCoding;
+ (CDStruct_071ac149)muninFeatureLocationForItemCoordinate:(CDStruct_c3b9c2ee)arg1 viewPosition:(CDStruct_071ac149)arg2 groundAltitude:(double)arg3;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id).cxx_construct;
- (shared_ptr_e9082761 *)feature;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1;
- (id)styleAttributes;
- (void)setStyleAttributes:(id)arg1;
- (void)setBusinessID:(unsigned long long)arg1;
- (void)setMinZoom:(float)arg1;
- (unsigned long long)businessID;
- (void)setMaxZoom:(float)arg1;
- (unsigned long long)venueID;
- (unsigned long long)featureID;
- (void)setSortKey:(int)arg1;
- (short)venueFloorOrdinal;
- (void)setText:(id)arg1 locale:(id)arg2;
- (void)setAnnotationText:(id)arg1 locale:(id)arg2;
- (void)setTextDisplayMode:(unsigned char)arg1;
- (void)setPlaceholderIconWithSize:(struct CGSize)arg1 anchorPoint:(struct CGPoint)arg2 isRound:(_Bool)arg3;
- (unsigned long long)venueBuildingID;
- (unsigned long long)venueLevelID;
- (unsigned long long)venueComponentID;
- (void)setVenueID:(unsigned long long)arg1;
- (id)_initWithCoordinate:(CDStruct_071ac149)arg1 isInjected:(_Bool)arg2;
- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1 elevation:(double)arg2;
- (void)setFeatureID:(unsigned long long)arg1;
- (void)setVenueLevelID:(unsigned long long)arg1;
- (void)setVenueComponentID:(unsigned long long)arg1;
- (void)setVenueFloorOrdinal:(short)arg1;
- (id)_initInternalFeatureWithCoordinate:(CDStruct_c3b9c2ee)arg1;
- (void)setVenueBuildingID:(unsigned long long)arg1;
- (_Bool)isInjectedFeature;

@end
