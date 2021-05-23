/*
 Image: /System/Library/PrivateFrameworks/BrailleTranslation.framework/BrailleTranslation
 */

#import <Foundation/NSBundle.h>

@interface NSBundle (BRLTBrailleTables)

+ (id)brl_brailleTableBundleWithIdentifier:(id)arg1;

- (id)brl_supportedTablesForLocale:(id)arg1;
- (id)brl_supportedLocales;
- (id)brl_languageAgnosticTables;
- (id)brl_brailleTablesDictionary;
- (_Bool)brl_tableIsLanguageAgnosticWithIdentifier:(id)arg1;
- (id)brl_supportedLocalesForTableWithIdentifier:(id)arg1;

@end
