/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableString;

__attribute__((visibility("hidden")))
@interface CPArchive : NSObject

{
    struct __CFArray *selections;
    struct __CFArray *imageNodes;
    NSMutableString *plainText;
    NSMutableString *htmlString;
    NSMutableString *htmlStringNoImages;
    NSData *webArchiveData;
}

- (id)init;
- (void)dealloc;
- (void)finalize;
- (id)webArchiveData;
- (void)addSelection:(struct CGPDFSelection *)arg1;
- (id)html;
- (void)dispose;
- (id)plainText;

@end
