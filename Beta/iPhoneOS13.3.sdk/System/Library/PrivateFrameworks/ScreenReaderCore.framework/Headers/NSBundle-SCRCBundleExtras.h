/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <Foundation/NSBundle.h>

@interface NSBundle (SCRCBundleExtras)

+ (id)coreFrameworkBundle;
+ (id)screenReaderFrameworkBundle;
+ (id)localizedCoreStringForKey:(id)arg1;
+ (id)localizedScreenReaderStringForKey:(id)arg1 table:(id)arg2;
+ (id)localeForString:(id)arg1;

- (id)bundleLocale;
- (id)localizedStringForKey:(id)arg1 table:(id)arg2 locale:(id)arg3;

@end
