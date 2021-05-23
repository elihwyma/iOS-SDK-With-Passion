/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/ENNoteStoreClient.h>

@class ENLinkedNotebookRef;

@protocol ENLinkedNoteStoreClientDelegate;

@interface ENLinkedNoteStoreClient : ENNoteStoreClient

{
    id <ENLinkedNoteStoreClientDelegate> _delegate;
    ENLinkedNotebookRef *_linkedNotebookRef;
}

@property (retain, nonatomic) ENLinkedNotebookRef *linkedNotebookRef;
@property (weak, nonatomic) id <ENLinkedNoteStoreClientDelegate> delegate;

+ (id)noteStoreClientForLinkedNotebookRef:(id)arg1;

- (id)authenticationToken;
- (id)noteStoreUrl;

@end
