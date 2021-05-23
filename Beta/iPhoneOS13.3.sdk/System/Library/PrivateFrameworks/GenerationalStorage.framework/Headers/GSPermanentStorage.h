/*
 Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
 */

#import <Foundation/NSObject.h>

#import <GenerationalStorage/Swift-Protocol.h>

@class GSDocumentIdentifier, GSStagingPrefix, NSData, NSURL;

@protocol NSCopying><NSSecureCoding;

@interface GSPermanentStorage : NSObject <Swift>

{
    GSDocumentIdentifier *_documentID;
    GSStagingPrefix *_stagingPrefix;
    NSURL *_documentURL;
    unsigned long long _remoteID;
    unsigned long long _storageID;
    NSData *_pubExtension;
    NSData *_privExtension;
    long long _pubHandle;
    long long _privHandle;
}

@property (nonatomic, readonly) long long remoteID;
@property (retain, nonatomic) GSStagingPrefix *stagingPrefix;
@property (retain) NSData *pubExtension;
@property (retain) NSData *privExtension;
@property (nonatomic, readonly) GSDocumentIdentifier *documentID;
@property (nonatomic, readonly) unsigned long long storageID;
@property (retain) NSURL *documentURL;
@property (nonatomic, readonly) id <NSCopying><NSSecureCoding> persistentIdentifier;

+ (id)storagePrefixForFileDescriptor:(int)arg1 error:(id *)arg2;
+ (id)storageIDForItemAtURL:(id)arg1 error:(id *)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)finalize;
- (void)_invalidate;
- (struct NSEnumerator *)enumeratorForAdditionsInNameSpace:(id)arg1 withOptions:(unsigned long long)arg2 withoutOptions:(unsigned long long)arg3 ordering:(int)arg4;
- (void)removeAdditions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)prepareAdditionCreationWithItemAtURL:(id)arg1 byMoving:(_Bool)arg2 creationInfo:(id)arg3 error:(id *)arg4;
- (void)cleanupStagingURL:(id)arg1;
- (void)createAdditionStagedAtURL:(id)arg1 creationInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeAllAdditionsForNamespaces:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)additionWithName:(id)arg1 inNameSpace:(id)arg2 error:(id *)arg3;
- (id)getAdditionDictionary:(id)arg1 error:(id *)arg2;
- (_Bool)setAdditionOptions:(id)arg1 value:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)setAdditionDisplayName:(id)arg1 value:(id)arg2 error:(id *)arg3;
- (id)setAdditionNameSpace:(id)arg1 value:(id)arg2 error:(id *)arg3;
- (_Bool)mergeAdditionUserInfo:(id)arg1 value:(id)arg2 error:(id *)arg3;
- (void)_connectionWithDaemonWasLost;
- (_Bool)replaceDocumentWithContentsOfAddition:(id)arg1 preservingCurrentVersionWithCreationInfo:(id)arg2 createdAddition:(id *)arg3 error:(id *)arg4;
- (id)URLforReplacingItemWithError:(id *)arg1;
- (_Bool)_refreshRemoteIDWithFileDescriptor:(int)arg1 error:(id *)arg2;
- (id)stagingURLforCreatingAdditionWithError:(id *)arg1;
- (_Bool)replaceDocumentWithContentsOfItemAtURL:(id)arg1 preservingCurrentVersionWithCreationInfo:(id)arg2 createdAddition:(id *)arg3 error:(id *)arg4;
- (id)additionsWithNames:(id)arg1 inNameSpace:(id)arg2 error:(id *)arg3;
- (id)initWithFileDescriptor:(int)arg1 documentID:(id)arg2 forItemAtURL:(id)arg3 error:(id *)arg4;
- (_Bool)transferToItemAtURL:(id)arg1 error:(id *)arg2;

@end
