/*
 Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <iTunesStore/ISStoreURLOperation.h>

@class SBKRequest;

__attribute__((visibility("hidden")))
@interface SBKTransactionURLOperation : ISStoreURLOperation

{
    _Bool _shouldAuthenticate;
    SBKRequest *_SBKRequest;
}

@property (nonatomic) _Bool shouldAuthenticate;
@property (retain, nonatomic) SBKRequest *SBKRequest;

+ (id)operationWithRequest:(id)arg1 delegate:(id)arg2;

- (id)init;
- (id)description;
- (id)_init;

@end
