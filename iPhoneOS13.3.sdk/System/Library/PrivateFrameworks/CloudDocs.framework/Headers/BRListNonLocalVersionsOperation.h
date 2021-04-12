//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import <CloudDocs/BRNonLocalVersionReceiving-Protocol.h>

@class GSPermanentStorage, NSError, NSMutableArray, NSMutableDictionary, NSString, NSURL;
@protocol BRNonLocalVersionSending;

@interface BRListNonLocalVersionsOperation : NSOperation <BRNonLocalVersionReceiving>
{
    NSURL *_documentURL;
    NSMutableArray *_versions;
    NSMutableDictionary *_versionsByEtag;
    GSPermanentStorage *_versionsStore;
    id <BRNonLocalVersionSending> _sender;
    BOOL _executing;
    BOOL _finished;
    BOOL _includeCachedVersions;
    BOOL _state;
    id /* CDUnknownBlockType */ _fetchingVersionsDoneBlock;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ fetchingVersionsDoneBlock; // @synthesize fetchingVersionsDoneBlock=_fetchingVersionsDoneBlock;
@property(nonatomic) BOOL includeCachedVersions; // @synthesize includeCachedVersions=_includeCachedVersions;
@property(readonly, nonatomic) NSMutableArray *versions; // @synthesize versions=_versions;
@property(nonatomic, getter=isExecuting) BOOL executing; // @synthesize executing=_executing;
@property(nonatomic, getter=isFinished) BOOL finished; // @synthesize finished=_finished;
// - (void).cxx_destruct;
- (oneway void)newThumbnailForVersionWithEtag:(id)arg1;
- (oneway void)versionsDone;
- (oneway void)newCachedVersionAtURL:(id)arg1 size:(id)arg2 etag:(id)arg3 hasThumbnail:(BOOL)arg4 displayName:(id)arg5 lastEditorDeviceName:(id)arg6 lastEditorNameComponents:(id)arg7 modificationDate:(id)arg8;
- (oneway void)newFaultVersionAtURL:(id)arg1 faultURL:(id)arg2 faultExtension:(id)arg3 etag:(id)arg4 hasThumbnail:(BOOL)arg5 displayName:(id)arg6 lastEditorDeviceName:(id)arg7 lastEditorNameComponents:(id)arg8 modificationDate:(id)arg9;
- (void)_addVersion:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)start;
- (BOOL)_setVersionStoreForDocumentAtURL:(id)arg1 error:(id )arg2;
- (BOOL)_advanceToState:(BOOL)arg1 result:(id)arg2 error:(id)arg3;
- (BOOL)__advanceToState:(BOOL)arg1 result:(id)arg2 error:(id)arg3;
- (BOOL)__finishIfCancelled;
- (void)cancel;
- (void)_senderInvalidate;
- (BOOL)isConcurrent;
- (void)dealloc;
- (id)initWithDocumentURL:(id)arg1;
@property(retain, nonatomic) NSError *error;

@end

