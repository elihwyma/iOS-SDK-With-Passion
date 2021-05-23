/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <Foundation/NSOperation.h>

@class GSPermanentStorage, NSError, NSMutableArray, NSMutableDictionary, NSString, NSURL;

@protocol BRNonLocalVersionSending;

@interface BRListNonLocalVersionsOperation : NSOperation

{
    NSURL *_documentURL;
    NSMutableArray *_versions;
    NSMutableDictionary *_versionsByEtag;
    GSPermanentStorage *_versionsStore;
    id <BRNonLocalVersionSending> _sender;
    _Bool _executing;
    _Bool _finished;
    _Bool _includeCachedVersions;
    BOOL _state;
    CDUnknownBlockType _fetchingVersionsDoneBlock;
}

@property (nonatomic, getter=isExecuting) _Bool executing;
@property (nonatomic, getter=isFinished) _Bool finished;
@property (retain, nonatomic) NSError *error;
@property (nonatomic, readonly) NSMutableArray *versions;
@property (nonatomic) _Bool includeCachedVersions;
@property (copy, nonatomic) CDUnknownBlockType fetchingVersionsDoneBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)cancel;
- (void)start;
- (_Bool)isConcurrent;
- (id)initWithDocumentURL:(id)arg1;
- (void)_senderInvalidate;
- (_Bool)__finishIfCancelled;
- (_Bool)__advanceToState:(BOOL)arg1 result:(id)arg2 error:(id)arg3;
- (_Bool)_advanceToState:(BOOL)arg1 result:(id)arg2 error:(id)arg3;
- (_Bool)_setVersionStoreForDocumentAtURL:(id)arg1 error:(id *)arg2;
- (void)_addVersion:(id)arg1;
- (oneway void)newFaultVersionAtURL:(id)arg1 faultURL:(id)arg2 faultExtension:(id)arg3 etag:(id)arg4 hasThumbnail:(_Bool)arg5 displayName:(id)arg6 lastEditorDeviceName:(id)arg7 lastEditorNameComponents:(id)arg8 modificationDate:(id)arg9;
- (oneway void)newCachedVersionAtURL:(id)arg1 size:(id)arg2 etag:(id)arg3 hasThumbnail:(_Bool)arg4 displayName:(id)arg5 lastEditorDeviceName:(id)arg6 lastEditorNameComponents:(id)arg7 modificationDate:(id)arg8;
- (oneway void)versionsDone;
- (oneway void)newThumbnailForVersionWithEtag:(id)arg1;

@end
