/*
 Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <StoreBookkeeper/SBKSyncRequestHandler.h>

@class NSString, SBKSyncTransaction;

@interface SBKLoadDomainVersionRequestHandler : SBKSyncRequestHandler

{
    _Bool _loadsRemoteItemCount;
    unsigned long long _responseItemCount;
    unsigned long long _itemCount;
    SBKSyncTransaction *_transaction;
}

@property unsigned long long itemCount;
@property (retain) SBKSyncTransaction *transaction;
@property _Bool loadsRemoteItemCount;
@property (readonly) unsigned long long responseItemCount;
@property (copy) NSString *responseDomainVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)conflictDetectionType;

- (void)runWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
