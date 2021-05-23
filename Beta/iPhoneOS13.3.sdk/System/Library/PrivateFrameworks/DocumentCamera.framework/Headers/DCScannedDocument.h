/*
 Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, NSURL;

@interface DCScannedDocument : NSObject

{
    NSString *_title;
    NSMutableArray *_docInfos;
    NSURL *_scannedDocumentImageDirectoryURL;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *docInfos;
@property (nonatomic, readonly) NSURL *scannedDocumentImageDirectoryURL;
@property (nonatomic, readonly) unsigned long long pageCount;

+ (void)initialize;
+ (id)scannedDocumentsFolderURL;

- (void)dealloc;
- (id)initWithURL:(id)arg1 error:(id *)arg2;
- (void)applicationWillTerminate:(id)arg1;
- (_Bool)saveToURL:(id)arg1 error:(id *)arg2;
- (id)imageOfPageAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfScans;
- (id)getImage:(id)arg1;
- (_Bool)deleteImage:(id)arg1;
- (void)replaceContentsWithDocInfoCollection:(id)arg1 imageCache:(id)arg2;
- (void)deleteAllImages;
- (_Bool)copyImagesFromDocInfoCollection:(id)arg1 imageCache:(id)arg2;
- (id)pListURL:(id)arg1;
- (id)copyImageForLoading:(id)arg1 fromFolderURL:(id)arg2;
- (id)copyImageForSaving:(id)arg1 toFolderURL:(id)arg2;
- (_Bool)makeSureScanDirectoryExists:(id *)arg1;
- (id)URLForImageWithUUID:(id)arg1;
- (id)URLForImageInFolder:(id)arg1 withUUID:(id)arg2;
- (id)copyImageAtURL:(id)arg1;
- (id)getImageURL:(id)arg1;
- (id)initWithDocInfoCollection:(id)arg1 imageCache:(id)arg2;
- (id)imageForScanAtIndex:(unsigned long long)arg1 error:(id *)arg2;

@end
