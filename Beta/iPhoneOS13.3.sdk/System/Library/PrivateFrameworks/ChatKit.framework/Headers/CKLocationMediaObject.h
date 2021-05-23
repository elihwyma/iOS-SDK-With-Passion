/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKContactMediaObject.h>

@class NSString;

@interface CKLocationMediaObject : CKContactMediaObject

{
    struct CLLocationCoordinate2D _coordinate;
}

@property (nonatomic) struct CLLocationCoordinate2D coordinate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *subtitle;

+ (id)UTITypes;
+ (id)placeholderPreviewCache;
+ (id)titleBarMaskImageForWidth:(double)arg1;
+ (id)attachmentSummary:(unsigned long long)arg1;
+ (id)fallbackFilenamePrefix;
+ (_Bool)isPreviewable;
+ (Class)__ck_attachmentItemClass;
+ (id)vcardDataFromCLLocation:(id)arg1;
+ (id)placeholderPreviewForWidth:(double)arg1 orientation:(BOOL)arg2;

- (int)mediaType;
- (id)mapItem;
- (id)transcriptTraitCollection;
- (id)previewForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)initWithTransfer:(id)arg1 isFromMe:(_Bool)arg2 suppressPreview:(_Bool)arg3 forceInlinePreview:(_Bool)arg4;
- (id)vCardURLProperties;
- (_Bool)isDroppedPin;
- (id)generateThumbnailFillToSize:(struct CGSize)arg1 contentAlignmentInsets:(struct UIEdgeInsets)arg2;
- (id)bbPreviewFillToSize:(struct CGSize)arg1;
- (struct CGSize)bbSize;
- (Class)previewBalloonViewClass;
- (id)previewCacheKeyWithOrientation:(BOOL)arg1;
- (id)previewCachesFileURLWithOrientation:(BOOL)arg1 extension:(id)arg2;
- (id)generatePlaceholderThumbnailForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)generatePlaceholderThumbnailFillToSize:(struct CGSize)arg1 contentAlignmentInsets:(struct UIEdgeInsets)arg2;

@end
