/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <ContentKit/WFContentItem.h>

@class NSString, WFiTunesObject;

@interface WFiTunesObjectContentItem : WFContentItem

@property (nonatomic, readonly) WFiTunesObject *object;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (_Bool)canLowercaseTypeDescription;
+ (_Bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (id)urlItem_outputClasses;
+ (_Bool)urlItem_canCoerceFromURL:(id)arg1;
+ (void)urlItem_generateObjectRepresentations:(CDUnknownBlockType)arg1 fromURL:(id)arg2 forClass:(Class)arg3;
+ (id)urlItem_sharingItemClassesByBundleIdentifier;
+ (_Bool)parseiTunesURL:(id)arg1 itemIdentifier:(id *)arg2 countryCode:(id *)arg3;
+ (void)urlItem_generateObjectRepresentations:(CDUnknownBlockType)arg1 fromiTunesURL:(id)arg2 forClass:(Class)arg3;

- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (void)generateFileRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;
- (id)preferredFileType;
- (_Bool)canGenerateRepresentationForType:(id)arg1;
- (id)possibleArtworkURLs;
- (void)getArtworkDataWithURLs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getArtworkForSize:(struct CGSize)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getPreferredArtworkURL:(CDUnknownBlockType)arg1;

@end
