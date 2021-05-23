/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class LPLinkMetadata, NSAttributedString, NSURL;

@protocol LPLinkMetadataStatusTransformerDelegate;

@interface LPLinkMetadataStatusTransformer : NSObject

{
    LPLinkMetadata *_metadata;
    NSURL *_URL;
    _Bool _wantsStatusItem;
    id <LPLinkMetadataStatusTransformerDelegate> _delegate;
}

@property (retain, nonatomic) LPLinkMetadata *metadata;
@property (weak, nonatomic) id <LPLinkMetadataStatusTransformerDelegate> delegate;
@property (nonatomic, readonly) _Bool wantsStatusItem;
@property (copy, nonatomic, readonly) NSAttributedString *statusText;
@property (copy, nonatomic, readonly) NSURL *actionURL;
@property (copy, nonatomic, readonly) NSURL *canonicalURL;

- (void)dealloc;
- (id)originalURL;
- (id)initWithMetadata:(id)arg1 URL:(id)arg2;

@end
