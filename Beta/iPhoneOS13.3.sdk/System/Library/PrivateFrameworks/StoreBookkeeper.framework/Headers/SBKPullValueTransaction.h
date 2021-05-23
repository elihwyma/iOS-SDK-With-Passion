/*
 Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <StoreBookkeeper/SBKTransaction.h>

@class NSString;

@protocol SBKKeyValuePayloadPair;

@interface SBKPullValueTransaction : SBKTransaction

{
    _Bool _success;
    NSString *_requestedKey;
    id <SBKKeyValuePayloadPair> _clientItemPayloadPair;
    NSString *_clientItemVersionAnchor;
    id <SBKKeyValuePayloadPair> _resultItemPayloadPair;
    NSString *_resultItemVersionAnchor;
    NSString *_resultDomainVersion;
}

@property (copy, readonly) NSString *requestedKey;
@property (readonly) id <SBKKeyValuePayloadPair> clientItemPayloadPair;
@property (readonly) NSString *clientItemVersionAnchor;
@property (readonly) _Bool success;
@property (readonly) id <SBKKeyValuePayloadPair> resultItemPayloadPair;
@property (readonly) NSString *resultItemVersionAnchor;
@property (readonly) NSString *resultDomainVersion;

- (id)description;
- (id)newRequest;
- (id)clampsKey;
- (void)processDataInResponse:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)initWithStoreBagContext:(id)arg1 requestedKey:(id)arg2 clientItemPayloadPair:(id)arg3 clientItemVersionAnchor:(id)arg4;

@end
