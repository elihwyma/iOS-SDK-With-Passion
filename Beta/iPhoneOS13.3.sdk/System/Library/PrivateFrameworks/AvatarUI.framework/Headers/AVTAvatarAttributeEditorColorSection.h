/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTAvatarColorVariationStore, NSArray, NSString;

@protocol AVTAvatarAttributeEditorHeaderPicker;

@interface AVTAvatarAttributeEditorColorSection : NSObject

{
    _Bool _alwaysShowExtended;
    NSString *_localizedName;
    NSString *_identifier;
    id <AVTAvatarAttributeEditorHeaderPicker> _headerAccessory;
    NSArray *_primaryItems;
    NSArray *_extendedItems;
    AVTAvatarColorVariationStore *_colorVariationStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *localizedName;
@property (copy, nonatomic, readonly) NSArray *sectionItems;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (retain, nonatomic) id <AVTAvatarAttributeEditorHeaderPicker> headerAccessory;
@property (nonatomic, readonly) AVTAvatarColorVariationStore *colorVariationStore;
@property (copy, nonatomic, readonly) NSArray *primaryItems;
@property (copy, nonatomic, readonly) NSArray *extendedItems;
@property (nonatomic, readonly) _Bool alwaysShowExtended;

- (_Bool)shouldDisplayTitle;
- (_Bool)shouldDisplaySeparatorBeforeSection:(id)arg1;
- (id)initWithPrimaryItems:(id)arg1 extendedItems:(id)arg2 colorVariationStore:(id)arg3 localizedName:(id)arg4 identifier:(id)arg5 alwaysShowExtended:(_Bool)arg6;

@end
