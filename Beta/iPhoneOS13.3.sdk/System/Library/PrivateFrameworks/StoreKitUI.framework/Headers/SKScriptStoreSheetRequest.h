/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, WebScriptObject;

__attribute__((visibility("hidden")))
@interface SKScriptStoreSheetRequest : SUScriptObject

{
    long long _pageStyle;
    WebScriptObject *_productParameters;
    NSString *_productURL;
}

@property long long productPageStyle;
@property (retain) WebScriptObject *productParameters;
@property (retain) NSString *productURL;
@property (readonly) long long productPageStyleAutomatic;
@property (readonly) long long productPageStyleBanner;
@property (readonly) long long productPageStylePad;
@property (readonly) long long productPageStylePhone;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKey:(const char *)arg1;

- (id)_className;
- (id)attributeKeys;
- (id)_safeValueForValue:(id)arg1;
- (id)scriptAttributeKeys;
- (id)newNativeStorePageRequest;

@end
