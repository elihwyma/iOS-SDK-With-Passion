/*
 Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

#import <ToneKit/TKPickerSelectableItem.h>

@class NSString, TKTonePickerController, TKTonePickerSectionItem;

@interface TKTonePickerItem : TKPickerSelectableItem

{
    _Bool _needsRoomForCheckmark;
    _Bool _needsActivityIndicator;
    _Bool _needsDownloadProgress;
    float _downloadProgress;
    unsigned long long _itemKind;
    TKTonePickerController *__parentTonePickerController;
    long long _numberOfChildren;
}

@property (weak, nonatomic, setter=_setParentTonePickerController:) TKTonePickerController *_parentTonePickerController;
@property (nonatomic, setter=_setNumberOfChildren:) long long numberOfChildren;
@property (nonatomic, setter=_setItemKind:) unsigned long long itemKind;
@property (nonatomic, setter=_setNeedsRoomForCheckmark:) _Bool needsRoomForCheckmark;
@property (nonatomic, setter=_setNeedsActivityIndicator:) _Bool needsActivityIndicator;
@property (nonatomic, setter=_setNeedsDownloadProgress:) _Bool needsDownloadProgress;
@property (nonatomic, setter=_setDownloadProgress:) float downloadProgress;
@property (nonatomic, readonly) TKTonePickerSectionItem *parentSectionItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)childItemAtIndex:(long long)arg1;
- (void)_appendDescriptionOfAttributesToString:(id)arg1;

@end
