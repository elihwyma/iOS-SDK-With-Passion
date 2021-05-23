/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, SXDocument, SXImageController, SXJSONObjectMerger, SXMetaData, UIColor;

@interface SXDocumentController : NSObject

{
    NSString *_shareURL;
    SXDocument *_document;
    SXJSONObjectMerger *_componentStyleMerger;
    SXImageController *_imageController;
    NSMutableDictionary *_componentStyles;
}

@property (nonatomic, readonly) SXJSONObjectMerger *componentStyleMerger;
@property (retain, nonatomic) SXImageController *imageController;
@property (retain, nonatomic) NSMutableDictionary *componentStyles;
@property (nonatomic, readonly) SXDocument *document;
@property (nonatomic, readonly) SXMetaData *metaData;
@property (nonatomic, readonly) UIColor *documentBackgroundColor;
@property (nonatomic, readonly) UIColor *topBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *shareURL;

- (id)requiredResourceURLs;
- (id)componentLayoutForIdentifier:(id)arg1;
- (id)componentStyleForComponent:(id)arg1;
- (id)resourceForIdentifier:(id)arg1;
- (id)imageResourceForIdentifier:(id)arg1;
- (id)initWithDocument:(id)arg1 shareURL:(id)arg2;
- (id)mergedObjectsWithIdentifiers:(id)arg1 fromDictionary:(id)arg2 merger:(id)arg3;
- (id)allImageResources;
- (id)filterImageResources;
- (id)componentIdentifierUsingThumbnailInComponents:(id)arg1;
- (id)componentIdentifierUsingThumbnail;

@end
