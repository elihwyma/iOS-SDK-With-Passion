/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class DirectoryWatcher, NSArray, NSDictionary, NSString;

@protocol LKDocumentStoreDelegate;

@interface LKDocumentStore : NSObject

{
    NSString *_dataPath;
    DirectoryWatcher *_inboxWatcher;
    DirectoryWatcher *_documentsWatcher;
    NSArray *_documents;
    id <LKDocumentStoreDelegate> _delegate;
}

@property (nonatomic, readonly) NSDictionary *capabilities;
@property (weak, nonatomic) id <LKDocumentStoreDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_hasWriteAccess;
+ (id)sharedDocumentStore;

- (id)init;
- (void)dealloc;
- (id)documentsPath;
- (void)_loadDocumentsFromIndexFileAndNotifyChanges:(_Bool)arg1;
- (void)writeDocumentsToIndexFile:(id)arg1;
- (id)capabilitiesPath;
- (void)processInbox;
- (id)inboxPath;
- (id)documentDataPath;
- (id)pathForDocumentDirectory:(id)arg1 create:(_Bool)arg2;
- (id)addDocumentFromInboxURL:(id)arg1;
- (id)documentWithName:(id)arg1;
- (void)updateDocument:(id)arg1;
- (id)documentIndexPath;
- (void)_didAddDocument:(id)arg1;
- (void)_didModifyDocument:(id)arg1;
- (void)_loadDocumentsFromIndex;
- (void)directoryDidChange:(id)arg1;
- (id)dictionaryDocuments;
- (_Bool)writeDocumentData:(id)arg1 toFile:(id)arg2;
- (id)documentDataFromFile:(id)arg1;
- (id)pathForDocument:(id)arg1;
- (void)_didRemoveDocument:(id)arg1;

@end
