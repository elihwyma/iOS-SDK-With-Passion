/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/_BRCOperation.h>

@class CKShareMetadata, NSString;

__attribute__((visibility("hidden")))
@interface BRCAcceptShareOperation : _BRCOperation

{
    CKShareMetadata *_shareMetadata;
    CDUnknownBlockType _acceptShareCompletionBlock;
}

@property (copy, nonatomic) CDUnknownBlockType acceptShareCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)main;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)initWithShareMetadata:(id)arg1 syncContext:(id)arg2;

@end
