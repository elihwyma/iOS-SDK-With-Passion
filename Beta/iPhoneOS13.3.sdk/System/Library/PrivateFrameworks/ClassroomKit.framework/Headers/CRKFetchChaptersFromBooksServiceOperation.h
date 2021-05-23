/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATOperation.h>

@class CRKFetchChaptersRequest;

@interface CRKFetchChaptersFromBooksServiceOperation : CATOperation

{
    CRKFetchChaptersRequest *mRequest;
}

- (void)main;
- (_Bool)isAsynchronous;
- (id)initWithRequest:(id)arg1;

@end
