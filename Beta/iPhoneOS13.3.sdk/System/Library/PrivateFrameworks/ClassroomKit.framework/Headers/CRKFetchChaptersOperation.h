/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATOperation.h>

@class NSString;

@interface CRKFetchChaptersOperation : CATOperation

{
    NSString *mPath;
    NSString *mIdentifierType;
    NSString *mIdentifier;
}

- (void)main;
- (_Bool)isAsynchronous;
- (id)initWithRequest:(id)arg1 error:(id *)arg2;
- (id)initWithBook:(id)arg1;
- (id)initWithBookPath:(id)arg1 identifierType:(id)arg2 identifier:(id)arg3;
- (void)parseOPFFilePathOperationDidFinish:(id)arg1;
- (void)parseOFPPackageContentsOperationDidFinish:(id)arg1;
- (void)parseTableOfContentsOperationDidFinish:(id)arg1;

@end
