/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <CoreMediaStream/MSMMCSProtocol.h>

@class NSMutableDictionary, NSString;

@protocol MSSubscribeStorageProtocolDelegate;

@interface MSSubscribeMMCSProtocol : MSMMCSProtocol

{
    id <MSSubscribeStorageProtocolDelegate> _delegate;
    unsigned long long _itemCount;
    NSMutableDictionary *_itemIDToAssetDict;
    unsigned long long *_itemIDs;
    const char **_signatures;
    char **_authTokens;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) id <MSSubscribeStorageProtocolDelegate> delegate;

- (void)dealloc;
- (void)deactivate;
- (void)retrieveAssets:(id)arg1;
- (void)_getItemDone:(unsigned long long)arg1 path:(id)arg2 error:(id)arg3;
- (void)_requestCompleted;
- (id)initWithPersonID:(id)arg1;
- (void)_tellDelegateProtocolDidFinishRetrievingAssetParams:(id)arg1;

@end
