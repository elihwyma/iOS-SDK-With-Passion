/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMDocumentMapper.h>

@class NSString, WDDocument;

__attribute__((visibility("hidden")))
@interface WMDocumentMapper : CMDocumentMapper

{
    NSString *mFileName;
}

@property (readonly) WDDocument *document;

- (double)topMargin;
- (double)rightMargin;
- (id)fileName;
- (void)setFileName:(id)arg1;
- (id)archiver;
- (id)documentTitle;
- (double)bottomMargin;
- (double)leftMargin;
- (id)blipAtIndex:(unsigned int)arg1;
- (int)defaultTabWidth;
- (struct CGSize)pageSizeForDevice;
- (struct CGSize)contentSizeForDevice;
- (double)headerMargin;
- (void)mapDefaultCssStylesAt:(id)arg1;
- (_Bool)hasSessionBreakAtIndex:(unsigned long long)arg1;
- (id)styleMatrix;
- (void)mapWithState:(id)arg1;

@end
