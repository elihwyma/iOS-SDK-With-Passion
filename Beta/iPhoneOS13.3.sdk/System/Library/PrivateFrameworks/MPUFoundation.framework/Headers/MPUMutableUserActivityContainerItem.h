/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <MPUFoundation/MPUUserActivityContainerItem.h>

@class MPMediaEntity;

@interface MPUMutableUserActivityContainerItem : MPUUserActivityContainerItem

@property (nonatomic) long long containerItemType;
@property (retain, nonatomic) MPMediaEntity *selectedMediaEntity;
@property (retain, nonatomic) MPMediaEntity *visualReferenceMediaEntity;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
