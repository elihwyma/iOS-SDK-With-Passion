/*
 Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

#import <ToneKit/TKPickerSectionItem.h>

@class NSString, TKTonePickerController;

@interface TKTonePickerSectionItem : TKPickerSectionItem

{
    unsigned long long _sectionHeader;
    unsigned long long _regularToneSectionIndex;
    TKTonePickerController *__parentTonePickerController;
    long long _numberOfChildren;
}

@property (weak, nonatomic, setter=_setParentTonePickerController:) TKTonePickerController *_parentTonePickerController;
@property (nonatomic, setter=_setNumberOfChildren:) long long numberOfChildren;
@property (nonatomic, setter=_setSectionHeader:) unsigned long long sectionHeader;
@property (nonatomic, setter=_setRegularToneSectionIndex:) unsigned long long regularToneSectionIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)childItemAtIndex:(long long)arg1;
- (void)_appendDescriptionOfAttributesToString:(id)arg1;

@end
