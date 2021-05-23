/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATOperation.h>

@class CRKBook, NSString;

@interface CRKParsePDFMetadataOperation : CATOperation

{
    _Bool _parseImage;
    CRKBook *_book;
    NSString *_filePath;
}

@property (nonatomic, readonly) CRKBook *book;
@property (nonatomic, readonly) NSString *filePath;
@property (nonatomic, readonly) _Bool parseImage;

- (void)main;
- (id)fileName;
- (id)initWithPDFBook:(id)arg1 filePath:(id)arg2 parseImage:(_Bool)arg3;
- (void)updateTitleWithDictionaryRef:(struct CGPDFDictionary *)arg1;
- (id)titleFromDictionaryRef:(struct CGPDFDictionary *)arg1;

@end
