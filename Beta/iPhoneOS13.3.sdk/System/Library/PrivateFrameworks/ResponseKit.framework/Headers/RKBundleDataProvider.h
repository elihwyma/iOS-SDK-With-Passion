/*
 Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

#import <Foundation/NSObject.h>

@class NSBundle, NSMutableDictionary, NSURL, RKAssets;

@interface RKBundleDataProvider : NSObject

{
    NSBundle *_bundle;
    RKAssets *_assets;
    NSURL *_assetPlistURL;
    NSMutableDictionary *_displayStringsByPlatformByLanguage;
    NSMutableDictionary *_polarityMapsByLanguageID;
    NSMutableDictionary *_localizationsByLanguageID;
}

@property (readonly) NSBundle *bundle;
@property (readonly) RKAssets *assets;
@property (readonly) NSURL *assetPlistURL;
@property (readonly) NSMutableDictionary *displayStringsByPlatformByLanguage;
@property (readonly) NSMutableDictionary *polarityMapsByLanguageID;
@property (retain) NSMutableDictionary *localizationsByLanguageID;

- (id)init;
- (id)initWithBundle:(id)arg1;
- (id)displayStringsForPlatform:(id)arg1 languageID:(id)arg2;
- (id)initWithAssetPlist:(id)arg1;
- (id)stringsFromTable:(id)arg1 forLanguageIdentifier:(id)arg2;

@end
