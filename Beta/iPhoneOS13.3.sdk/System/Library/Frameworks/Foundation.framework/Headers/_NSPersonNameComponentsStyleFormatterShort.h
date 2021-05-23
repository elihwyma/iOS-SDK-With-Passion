/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/_NSPersonNameComponentsStyleFormatter.h>

@class _NSPersonNameComponentsStyleFormatterShortVariantGeneral;

__attribute__((visibility("hidden")))
@interface _NSPersonNameComponentsStyleFormatterShort : _NSPersonNameComponentsStyleFormatter

{
    long long _shortNameFormat;
    _NSPersonNameComponentsStyleFormatterShortVariantGeneral *_variantFormatter;
    _NSPersonNameComponentsStyleFormatter *_subFormatter;
    _Bool _forceShortNameEnabled;
}

@property long long shortNameFormat;
@property (readonly) _NSPersonNameComponentsStyleFormatterShortVariantGeneral *variantFormatter;
@property (retain) _NSPersonNameComponentsStyleFormatter *subFormatter;
@property _Bool forceShortNameEnabled;

- (void)dealloc;
- (id)keysOfInterest;
- (_Bool)isEnabled;
- (id)_formattedStringFromOrderedKeys:(id)arg1 components:(id)arg2 attributesByRange:(id)arg3;
- (id)fallbackStyleFormatter;
- (id)orderedKeysOfInterest;
- (id)abbreviatedKeys;
- (id)initWithMasterFormatter:(id)arg1;

@end
