/*
 Image: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
 */

#import <USDKit/USKObject.h>

@class NSURL, USKNode;

@interface USKScene : USKObject

{
    TfRefPtr_a9ae0d85 _usdStage;
    NSURL *_fileURL;
}

@property (nonatomic, readonly) USKNode *rootNode;

- (void)dealloc;
- (void)save;
- (id).cxx_construct;
- (id)metadata;
- (id)objectAtPath:(id)arg1;
- (id)newNodeAtPath:(id)arg1 type:(id)arg2;
- (_Bool)setMetadataWithKey:(id)arg1 value:(id)arg2;
- (_Bool)setDictionaryMetadataWithKey:(id)arg1 dictionaryKey:(id)arg2 value:(id)arg3;
- (void)saveAndCreateUSDZPackageWithURL:(id)arg1;
- (id)initSceneFromURL:(id)arg1;
- (id)nodeIterator;
- (id)metadataWithKey:(id)arg1;
- (TfRefPtr_a9ae0d85)usdStage;
- (id)initWithUsdStage:(TfRefPtr_a9ae0d85)arg1 fileURL:(id)arg2;
- (void)saveAndCreateARKitUSDZPackageWithURL:(id)arg1;
- (id)nodeAtPath:(id)arg1;
- (id)propertyAtPath:(id)arg1;
- (_Bool)setCustomMetadata:(id)arg1 value:(id)arg2;
- (id)dictionaryMetadataWithKey:(id)arg1 dictionaryKey:(id)arg2;
- (id)customMetadataWithKey:(id)arg1;
- (void)dumpUSDA;

@end
