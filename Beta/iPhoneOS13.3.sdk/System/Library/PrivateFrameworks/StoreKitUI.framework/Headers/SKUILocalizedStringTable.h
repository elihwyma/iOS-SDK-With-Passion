/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSBundle, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SKUILocalizedStringTable : NSObject

{
    NSDictionary *_strings;
    NSBundle *_bundle;
    NSString *_tableName;
}

@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) NSString *tableName;

- (id)localizedStringForKey:(id)arg1;
- (id)initWithBundle:(id)arg1 localeName:(id)arg2 tableName:(id)arg3;
- (id)_legacyLanguageNameForLanguageCode:(id)arg1;

@end
