/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKBalloonChatItem.h>

@class FMFLocation, IMHandle, NSString;

@interface CKLocationShareOfferChatItem : CKBalloonChatItem

{
    FMFLocation *_lastKnownLocation;
}

@property (retain, nonatomic) FMFLocation *lastKnownLocation;
@property (nonatomic, readonly) long long offerState;
@property (weak, nonatomic, readonly) IMHandle *sender;
@property (weak, nonatomic, readonly) NSString *titleText;
@property (weak, nonatomic, readonly) NSString *locationText;

+ (id)placeholderPreviewCache;
+ (id)titleBarMaskImageForWidth:(double)arg1;

- (void)dealloc;
- (id)time;
- (_Bool)failed;
- (_Bool)isFromMe;
- (id)previewURL;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;
- (void)_handleLocationDidChangeNotification:(id)arg1;
- (id)_previewCacheKey:(unsigned long long)arg1;
- (id)previewURLForWidth:(unsigned long long)arg1;
- (id)savedPreviewFromURL:(id)arg1;
- (id)_desaturatedImageForImage:(id)arg1;
- (id)_placeholderCacheKey;
- (id)_generatePlaceholderThumbnailFillToSize:(struct CGSize)arg1;
- (void)_generateMapPreview;
- (_Bool)shouldUpdatePreviewWithLocation:(id)arg1 lastKnownLocation:(id)arg2 previewURL:(id)arg3;
- (id)transcriptTraitCollection;
- (id)_generateThumbnailFillToSize:(struct CGSize)arg1 contentAlignmentInsets:(struct UIEdgeInsets)arg2 withCoordinate:(struct CLLocationCoordinate2D)arg3 forState:(long long)arg4;
- (void)savePreview:(id)arg1 toURL:(id)arg2;
- (id)modificationDateForPreview:(id)arg1;
- (Class)balloonViewClass;
- (void)configureBalloonView:(id)arg1;
- (id)previewForWidth:(double)arg1 orientation:(BOOL)arg2;

@end
