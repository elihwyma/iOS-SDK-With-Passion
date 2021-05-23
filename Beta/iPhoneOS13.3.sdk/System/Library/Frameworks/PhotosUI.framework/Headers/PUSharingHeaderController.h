/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class LPImage, LPLinkMetadata;

@protocol PUSharingHeaderDataProvider, PXDisplayAsset;

__attribute__((visibility("hidden")))
@interface PUSharingHeaderController : NSObject

{
    LPImage *_icloudLinkImage;
    LPImage *_placeholderImage;
    id <PXDisplayAsset> _sharingHeaderFrontAsset;
    id <PXDisplayAsset> _sharingHeaderBackAsset;
    id <PUSharingHeaderDataProvider> _dataProvider;
    LPLinkMetadata *_linkMetadata;
}

@property (retain, nonatomic) LPLinkMetadata *linkMetadata;
@property (weak, nonatomic, readonly) id <PUSharingHeaderDataProvider> dataProvider;

+ (id)new;

- (id)init;
- (void)updateIfNeeded;
- (id)initWithDataProvider:(id)arg1;
- (id)_sharingHeaderStatus;
- (id)_linkPresentationImageForAsset:(id)arg1;

@end
