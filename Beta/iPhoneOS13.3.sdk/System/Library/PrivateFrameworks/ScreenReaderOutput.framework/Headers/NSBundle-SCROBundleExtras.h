/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <Foundation/NSBundle.h>

@interface NSBundle (SCROBundleExtras)

+ (id)brailleDriverDeviceDetectionInfo;
+ (id)brailleDriverBundleWithIdentifier:(id)arg1;
+ (id)brailleDriverBundles;
+ (id)_brailleTableBundles;
+ (id)brailleTableBundleWithTableIdentifier:(id)arg1;
+ (id)_brailleTableDictionaryForBrailleTableIdentifier:(id)arg1;
+ (_Bool)doesBrailleTableSupportContractions:(id)arg1;
+ (_Bool)doesBrailleTableSupportEightDot:(id)arg1;
+ (id)languageIdentifiersForBrailleTableIdentifier:(id)arg1;

- (id)tableIdentifierForBundleSpecificTableIdentifier:(id)arg1;

@end
