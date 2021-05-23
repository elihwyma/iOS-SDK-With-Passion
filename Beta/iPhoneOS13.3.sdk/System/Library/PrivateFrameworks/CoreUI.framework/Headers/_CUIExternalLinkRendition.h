/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUIThemeRendition.h>

@class NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface _CUIExternalLinkRendition : CUIThemeRendition

{
    NSString *_assetPackIdentifier;
    NSMutableSet *_externalTags;
}

- (void)dealloc;
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(long long)arg3;
- (id)assetPackIdentifier;
- (id)externalTags;

@end
