/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface WBSReaderFontManager : NSObject

{
    NSArray *_validatedFonts;
    NSString *_languageTag;
}

@property (readonly) NSArray *fonts;
@property (readonly) NSArray *possibleFonts;
@property (copy, readonly) NSString *languageTag;

- (id)init;
- (void)updateLanguageTag:(id)arg1;
- (void)_fontDownloadDidFinish:(id)arg1;
- (id)fontWithFontFamilyName:(id)arg1;
- (id)defaultFontForLanguageTag:(id)arg1;

@end
