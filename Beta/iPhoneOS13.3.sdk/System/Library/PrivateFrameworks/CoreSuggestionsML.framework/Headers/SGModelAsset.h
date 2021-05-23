/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
 */

#import <Foundation/NSObject.h>

@interface SGModelAsset : NSObject

+ (void)_reset;
+ (id)asset;
+ (id)mappings;
+ (id)rules;
+ (void)registerOnUpdateBlock:(CDUnknownBlockType)arg1;
+ (id)metricsConfig;
+ (id)dpRecorderRules;
+ (id)signatureRules;
+ (void)_invokeOnUpdateBlock;
+ (id)_assetWithName:(id)arg1 andLoadBlock:(CDUnknownBlockType)arg2;
+ (id)quickResponses;
+ (id)dictionaryWithPlistFilename:(id)arg1;
+ (id)dictionaryWithPlistAssetPath:(id)arg1;

@end
