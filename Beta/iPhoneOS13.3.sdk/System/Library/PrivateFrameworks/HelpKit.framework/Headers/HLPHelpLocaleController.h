/*
 Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

#import <HelpKit/HLPRemoteDataController.h>

@class NSArray, NSURL;

@interface HLPHelpLocaleController : HLPRemoteDataController

{
    NSArray *_supportedLanguageCodes;
    NSURL *_helpBookURL;
    NSArray *_preferredLanguagesOverride;
    NSArray *_locales;
}

@property (retain, nonatomic) NSArray *preferredLanguagesOverride;
@property (retain, nonatomic) NSArray *locales;

- (id)initWithURL:(id)arg1;
- (id)currentLocale;
- (void)processFileURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)processData:(id)arg1 formattedData:(id)arg2;
- (id)englishLocale;
- (id)localeWithPreferredLanguages:(id)arg1;

@end
