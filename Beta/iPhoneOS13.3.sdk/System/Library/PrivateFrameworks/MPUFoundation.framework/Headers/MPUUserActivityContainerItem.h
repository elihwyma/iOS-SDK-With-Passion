/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <Foundation/NSObject.h>

@class MPMediaEntity, MPUContentItemIdentifierCollection, _MPUProtoBufUserActivityContainerItem;

@interface MPUUserActivityContainerItem : NSObject

{
    long long _containerItemType;
    MPMediaEntity *_selectedMediaEntity;
    MPMediaEntity *_visualReferenceMediaEntity;
}

@property (nonatomic, readonly) MPUContentItemIdentifierCollection *MPU_selectedContentItemIdentifierCollection;
@property (nonatomic, readonly) MPUContentItemIdentifierCollection *MPU_visualReferenceContentItemIdentifierCollection;
@property (nonatomic, readonly) _MPUProtoBufUserActivityContainerItem *protoBufUserActivityContainerItem;
@property (nonatomic, readonly) long long containerItemType;
@property (nonatomic, readonly) MPMediaEntity *selectedMediaEntity;
@property (nonatomic, readonly) MPMediaEntity *visualReferenceMediaEntity;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithContainerItemType:(long long)arg1;
- (id)initWithProtoBufUserActivityContainerItem:(id)arg1;
- (id)_MPU_contentItemIdentifierCollectionWithMediaEntity:(id)arg1;

@end
