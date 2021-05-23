/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface MPMediaRemoteEntityTranslator : NSObject

{
    NSMutableDictionary *_propertiesToTranslators;
    NSMutableDictionary *_relationshipsToTranslators;
    Class _MPModelClass;
}

@property (nonatomic, readonly) Class MPModelClass;

+ (id)translatorForMPModelClass:(Class)arg1;
+ (id)_translatorForMPModelClass:(Class)arg1 create:(_Bool)arg2;
+ (id)_translatorForMPModelClass:(Class)arg1;

- (id)_propertyTranslatorForKeyPath:(id)arg1;
- (void)mapIdentifierCreationBlock:(CDUnknownBlockType)arg1;
- (void)mapPropertyKey:(id)arg1 toMPContentItemSelector:(SEL)arg2;
- (void)mapPropertyKey:(id)arg1 toArtworkValueTransformer:(CDUnknownBlockType)arg2;
- (void)mapPropertyKey:(id)arg1 toValueTransformer:(CDUnknownBlockType)arg2;
- (void)mapRelationshipKey:(id)arg1 toModelClass:(Class)arg2;
- (id)sectionObjectForPropertySet:(id)arg1 contentItem:(id)arg2 artworkGenerator:(id)arg3;
- (id)objectForPropertySet:(id)arg1 contentItem:(id)arg2 artworkGenerator:(id)arg3;
- (id)objectForPropertySet:(id)arg1 contentItem:(id)arg2 artworkGenerator:(id)arg3 baseTranslator:(id)arg4 prependKeyPath:(id)arg5;
- (id)identifiersForContentItem:(id)arg1;
- (id)_sectionGenericObjectPropertySetForContentItem:(id)arg1 propertySet:(id)arg2;
- (id)_valueForKeyPath:(id)arg1 forContentItem:(id)arg2 artworkGenerator:(id)arg3;

@end
