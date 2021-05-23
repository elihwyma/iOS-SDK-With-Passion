/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class LPImage, LPLinkMetadata, NSString, NSURL;

@interface LPLinkMetadataPreviewTransformer : NSObject

{
    LPLinkMetadata *_metadata;
    NSURL *_URL;
}

@property (copy, nonatomic, readonly) LPLinkMetadata *metadata;
@property (copy, nonatomic, readonly) NSURL *URL;
@property (copy, nonatomic, readonly) NSString *previewSummary;
@property (retain, nonatomic, readonly) LPImage *previewImage;

- (id)initWithMetadata:(id)arg1 URL:(id)arg2;

@end
