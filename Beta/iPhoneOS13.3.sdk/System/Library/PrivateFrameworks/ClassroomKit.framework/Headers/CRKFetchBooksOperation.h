/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATOperation.h>

@class NSMutableArray;

@interface CRKFetchBooksOperation : CATOperation

{
    CDUnknownBlockType mBookLibraryProxy;
    NSMutableArray *mBooks;
    _Bool mIncludeImages;
}

- (void)main;
- (_Bool)isAsynchronous;
- (id)initWithBookLibraryProxy:(CDUnknownBlockType)arg1 includeImages:(_Bool)arg2;
- (void)parseBookMetadataOperationDidFail:(id)arg1;
- (void)parsePDFMetadataOperationDidFail:(id)arg1;
- (id)initWithBookLibraryProxy:(CDUnknownBlockType)arg1;
- (id)initWithBookLibraryProxy:(CDUnknownBlockType)arg1 request:(id)arg2 error:(id *)arg3;

@end
