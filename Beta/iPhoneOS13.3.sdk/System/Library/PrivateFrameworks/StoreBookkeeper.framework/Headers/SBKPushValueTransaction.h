/*
 Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <StoreBookkeeper/SBKTransaction.h>

@class NSString;

@protocol SBKKeyValuePayloadPair;

@interface SBKPushValueTransaction : SBKTransaction

{
    _Bool _isRechedulable;
    _Bool _success;
    id <SBKKeyValuePayloadPair> _clientItemPayloadPair;
    NSString *_clientItemVersionAnchor;
    id <SBKKeyValuePayloadPair> _requestItemPayloadPair;
    NSString *_requestItemVersionAnchor;
    id <SBKKeyValuePayloadPair> _resultItemPayloadPair;
    NSString *_resultItemVersionAnchor;
    NSString *_resultDomainVersion;
}

@property (readonly) id <SBKKeyValuePayloadPair> clientItemPayloadPair;
@property (readonly) NSString *clientItemVersionAnchor;
@property (readonly) id <SBKKeyValuePayloadPair> requestItemPayloadPair;
@property (readonly) NSString *requestItemVersionAnchor;
@property (readonly) _Bool success;
@property (readonly) id <SBKKeyValuePayloadPair> resultItemPayloadPair;
@property (readonly) NSString *resultItemVersionAnchor;
@property (readonly) NSString *resultDomainVersion;

- (id)description;
- (id)newRequest;
- (id)clampsKey;
- (void)processDataInResponse:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)_resolveConflictBetweenClientPayloadPair:(id)arg1 andServerPayloadPair:(id)arg2;
- (id)initWithStoreBagContext:(id)arg1 clientItemPayloadPair:(id)arg2 clientItemVersionAnchor:(id)arg3;

@end
