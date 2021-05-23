/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUINamedLookup.h>

@class NSString;

@interface CUINamedColor : CUINamedLookup

{
    struct CGColor *_cgColor;
    NSString *_colorName;
    _Bool _substituteWithSystemColor;
}

@property (nonatomic, readonly) struct CGColor *cgColor;
@property (nonatomic, readonly) _Bool substituteWithSystemColor;
@property (nonatomic, readonly) NSString *systemColorName;

- (void)dealloc;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3;

@end
