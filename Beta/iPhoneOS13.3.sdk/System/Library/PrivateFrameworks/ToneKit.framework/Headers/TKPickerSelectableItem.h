/*
 Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

#import <ToneKit/TKPickerRowItem.h>

@class NSString;

@interface TKPickerSelectableItem : TKPickerRowItem

{
    _Bool _shouldTintText;
    _Bool _showsCheckmark;
    _Bool _showsDisclosureIndicator;
    _Bool _shouldPreventSelection;
    NSString *_text;
    NSString *_detailText;
}

@property (copy, nonatomic, setter=_setText:) NSString *text;
@property (nonatomic, setter=_setShouldTintText:) _Bool shouldTintText;
@property (copy, nonatomic, setter=_setDetailText:) NSString *detailText;
@property (nonatomic, setter=_setShowsCheckmark:) _Bool showsCheckmark;
@property (nonatomic, setter=_setShowsDisclosureIndicator:) _Bool showsDisclosureIndicator;
@property (nonatomic, setter=_setShouldPreventSelection:) _Bool shouldPreventSelection;

- (void)_appendDescriptionOfAttributesToString:(id)arg1;

@end
