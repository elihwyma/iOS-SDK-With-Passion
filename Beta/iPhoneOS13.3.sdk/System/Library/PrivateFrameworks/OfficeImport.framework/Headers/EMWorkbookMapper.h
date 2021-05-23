/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMDocumentMapper.h>

@class EDWorkbook, NSMutableArray, NSString, OIXMLDocument, OIXMLElement;

__attribute__((visibility("hidden")))
@interface EMWorkbookMapper : CMDocumentMapper

{
    unsigned long long mRealSheetCount;
    int mWidth;
    int mHeight;
    NSMutableArray *mWorksheetUrls;
    NSMutableArray *mWorksheetNames;
    NSMutableArray *mWorksheetGuids;
    NSString *mResourceUrlPrefix;
    NSString *mResourceUrlProtocol;
    NSString *mStyleSheetGuid;
    NSString *mFileName;
    unsigned int mSheetIndex;
    _Bool mIsFirstMappedSheet;
    _Bool mIsFrameset;
    OIXMLDocument *mXhtmlDoc;
    OIXMLElement *mBodyElement;
    OIXMLDocument *mTabBarDoc;
    NSString *mTabBarURL;
    NSMutableArray *mSheetURLs;
    double mTabPosition;
    unsigned long long mNumberOfMappedSheets;
    _Bool mHasPushedHeader;
    _Bool mHasPushedFirstSheet;
    _Bool mLoadingMessageVisible;
}

@property (retain) NSString *fileName;
@property (readonly) EDWorkbook *document;

+ (id)borderStyleCache;
+ (id)borderWidthCache;
+ (id)cssStyleCache;

- (void)setElementCount:(unsigned long long)arg1;
- (id)archiver;
- (id)documentTitle;
- (id)blipAtIndex:(unsigned int)arg1;
- (struct CGSize)pageSizeForDevice;
- (id)styleMatrix;
- (void)startMappingWithState:(id)arg1;
- (void)mapElement:(id)arg1 atIndex:(unsigned long long)arg2 withState:(id)arg3 isLastElement:(_Bool)arg4;
- (void)finishMappingWithState:(id)arg1;
- (id)initWithDocument:(id)arg1 archiver:(id)arg2;
- (_Bool)hasMultipleSheets;
- (void)mapStylesheetData:(id)arg1 name:(id)arg2 atElement:(id)arg3;
- (id)headElementForFrontPage;
- (id)tabTitleDrawingAttributes;
- (void)mapStylesheetNamed:(id)arg1 atElement:(id)arg2;
- (id)copySheetMapperWithEdSheet:(id)arg1;
- (id)_copyStringForSheet:(id)arg1 atIndex:(unsigned long long)arg2 withState:(id)arg3 andMapper:(id)arg4;
- (id)_frontPageByCopyingMainPage;
- (void)_pushTabForSheet:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_mainPageBack;

@end
