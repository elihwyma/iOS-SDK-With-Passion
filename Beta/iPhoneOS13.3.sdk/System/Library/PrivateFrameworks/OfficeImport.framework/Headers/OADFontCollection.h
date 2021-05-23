/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADBaseFontCollection.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OADFontCollection : OADBaseFontCollection

{
    NSMutableDictionary *_scriptToFontMap;
}

- (id)init;
- (id)description;
- (_Bool)isEmpty;
- (id)scripts;
- (id)fontForScript:(id)arg1;
- (void)setFont:(id)arg1 forScript:(id)arg2;
- (_Bool)isEqualToFontCollection:(id)arg1;

@end
