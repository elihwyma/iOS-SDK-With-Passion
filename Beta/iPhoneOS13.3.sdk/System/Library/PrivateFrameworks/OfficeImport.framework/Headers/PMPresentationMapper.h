/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMDocumentMapper.h>

@class NSMutableArray, NSString, OIXMLDocument, OIXMLElement, PDPresentation;

__attribute__((visibility("hidden")))
@interface PMPresentationMapper : CMDocumentMapper

{
    int mWidth;
    NSMutableArray *mSlideNames;
    NSMutableArray *mSlideGuids;
    NSString *mResourceUrlPrefix;
    NSString *mResourceUrlProtocol;
    OIXMLDocument *mXhtmlDoc;
    OIXMLElement *mBodyElement;
    unsigned int mNextCommit;
    unsigned int mCurrentSlide;
    _Bool mHasPushedFirstSlides;
}

@property (readonly) PDPresentation *document;

- (id)documentTitle;
- (struct CGSize)slideSize;
- (id)blipAtIndex:(unsigned int)arg1;
- (struct CGSize)pageSizeForDevice;
- (void)startMappingWithState:(id)arg1;
- (void)mapElement:(id)arg1 atIndex:(unsigned long long)arg2 withState:(id)arg3 isLastElement:(_Bool)arg4;
- (void)finishMappingWithState:(id)arg1;
- (id)initWithDocument:(id)arg1 archiver:(id)arg2;
- (struct CGSize)pageSizeForDeviceIncludingMargins:(_Bool)arg1;
- (void)setHtmlDocumentSizeInArchiver;
- (id)defaultStyleSheet;
- (void)_pushEmptySlideWithMessage:(id)arg1;

@end
