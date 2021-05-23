/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/ENNoteStoreClient.h>

@class NSString;

@protocol ENBusinessNoteStoreClientDelegate;

@interface ENBusinessNoteStoreClient : ENNoteStoreClient

{
    id <ENBusinessNoteStoreClientDelegate> _delegate;
    NSString *_noteStoreUrl;
}

@property (weak, nonatomic) id <ENBusinessNoteStoreClientDelegate> delegate;
@property (copy, nonatomic) NSString *noteStoreUrl;

+ (id)noteStoreClientForBusiness;

- (id)authenticationToken;
- (void)createBusinessNotebook:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createBusinessNotebook:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;

@end
