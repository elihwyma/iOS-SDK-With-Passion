/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATOperation.h>

@class CRKBook;

@interface CRKParseBookMetadataOperation : CATOperation

{
    _Bool mParseImage;
    CRKBook *_book;
}

@property (nonatomic, readonly) CRKBook *book;

- (void)main;
- (_Bool)isAsynchronous;
- (id)initWithBook:(id)arg1 parseImage:(_Bool)arg2;
- (void)parseContentsFilePathOperationDidFinish:(id)arg1;
- (void)parseBookContentsOperationDidFinish:(id)arg1;

@end
