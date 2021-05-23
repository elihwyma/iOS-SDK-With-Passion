/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <AvatarUI/Swift-Protocol.h>

@class AVTAvatarColorVariationStore, NSArray;

@protocol AVTAvatarAttributeEditorColorSectionProtocol <Swift>

@property (nonatomic, readonly) AVTAvatarColorVariationStore *colorVariationStore;
@property (copy, nonatomic, readonly) NSArray *primaryItems;
@property (copy, nonatomic, readonly) NSArray *extendedItems;
@property (nonatomic, readonly) _Bool alwaysShowExtended;

@end
