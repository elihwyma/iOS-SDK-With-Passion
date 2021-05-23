/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <CoreMediaStream/MSMMCSProtocol.h>

@class NSMutableDictionary, NSString;

@protocol MSPublishStorageProtocolDelegate;

@interface MSPublishMMCSProtocol : MSMMCSProtocol

{
    id <MSPublishStorageProtocolDelegate> _delegate;
    NSMutableDictionary *_itemIDToAssetDict;
    unsigned long long *_itemIDs;
    const char **_signatures;
    char **_authTokens;
    unsigned int *_itemFlags;
    long long _itemsInFlight;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) id <MSPublishStorageProtocolDelegate> delegate;

- (void)dealloc;
- (void)deactivate;
- (void)computeHashForAsset:(id)arg1;
- (int)_getFileDescriptorFromItem:(unsigned long long)arg1;
- (id)_getUTIFromItem:(unsigned long long)arg1;
- (void)_putItemDone:(unsigned long long)arg1 putReceipt:(id)arg2 error:(id)arg3;
- (void)_requestCompleted;
- (void)publishAssets:(id)arg1 URL:(id)arg2;
- (id)initWithPersonID:(id)arg1;
- (void)_putItemsFailure;

@end
