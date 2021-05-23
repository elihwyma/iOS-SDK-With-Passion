/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponentSizer.h>

@class NSString, SXMosaicGalleryLayouter;

@interface SXMosaicGalleryComponentSizer : SXComponentSizer

{
    SXMosaicGalleryLayouter *_layouter;
}

@property (retain, nonatomic) SXMosaicGalleryLayouter *layouter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (double)calculateHeightForWidth:(double)arg1 layoutContext:(id)arg2;
- (unsigned long long)numberOfItemsForGalleryLayouter:(id)arg1;
- (struct CGSize)galleryLayouter:(id)arg1 dimensionsForItemAtIndex:(unsigned long long)arg2;
- (id)galleryLayouter:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2;
- (_Bool)galleryLayouter:(id)arg1 viewIsCurrentlyFullscreenForItemAtIndex:(unsigned long long)arg2;
- (id)documentColumnLayoutForGalleryLayouter:(id)arg1;

@end
