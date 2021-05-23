/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATOperation.h>

@class CRKFetchBooksRequest;

@interface CRKFetchBooksFromBooksServiceOperation : CATOperation

{
    CRKFetchBooksRequest *mRequest;
}

+ (id)defaultRequest;

- (id)init;
- (void)main;
- (_Bool)isAsynchronous;
- (id)initWithRequest:(id)arg1;

@end
