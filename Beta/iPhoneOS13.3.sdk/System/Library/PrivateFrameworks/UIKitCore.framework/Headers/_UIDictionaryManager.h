/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIDictionaryManager : NSObject

{
    NSArray *_availableDefinitionDictionaries;
}

@property (readonly) NSArray *availableDefinitionDictionaries;

+ (id)assetManager;

- (id)init;
- (id)_allAvailableDefinitionDictionaries;
- (void)_downloadDictionaryAssetCatalog:(CDUnknownBlockType)arg1;
- (id)_definitionValuesForTerm:(id)arg1;
- (_Bool)_hasDefinitionForTerm:(id)arg1;
- (id)_dictionaryAssetType;
- (id)_availableDictionaryAssets;
- (_Bool)_isTTYEnabled;

@end
