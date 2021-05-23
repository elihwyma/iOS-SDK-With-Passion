/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <AvatarUI/AVTEditingModelColors.h>

@class NSMutableDictionary;

@interface AVTMutableEditingModelColors : AVTEditingModelColors

{
    struct NSMutableDictionary *_mutableStorage;
}

@property (nonatomic, readonly) NSMutableDictionary *mutableStorage;

- (id)initWithStorage:(struct NSDictionary *)arg1 variationStore:(id)arg2;
- (void)setColor:(id)arg1 forSettingKind:(CDStruct_597dd055)arg2 identifier:(id)arg3;
- (id)initWithVariationStore:(id)arg1;

@end
