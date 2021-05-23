/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/FxPinParameter.h>

@interface FxParameterListSelection : FxPinParameter

{
    struct FxParameterListSelectionPriv *_listSelectionPriv;
}

- (id)init;
- (void)dealloc;
- (id)listItems;
- (void)setListItems:(id)arg1;
- (int)preferredListVariant;
- (void)setPreferredListVariant:(int)arg1;
- (id)displayNameForValue:(id)arg1;

@end
