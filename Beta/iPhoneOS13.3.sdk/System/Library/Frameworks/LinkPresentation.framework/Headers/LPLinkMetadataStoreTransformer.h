/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class LPLinkMetadata, NSURL;

@interface LPLinkMetadataStoreTransformer : NSObject

{
    LPLinkMetadata *_metadata;
    NSURL *_URL;
}

- (id)storeIdentifier;
- (id)initWithMetadata:(id)arg1 URL:(id)arg2;

@end
