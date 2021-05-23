/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <Foundation/NSObject.h>

@class BDSServiceProxy;

@interface BDSNBPinningManager : NSObject

{
    BDSServiceProxy *_serviceProxy;
}

@property (retain, nonatomic) BDSServiceProxy *serviceProxy;

- (id)init;
- (void)fetchMostRecentAudiobookWithCompletion:(CDUnknownBlockType)arg1;
- (id)updateWantToReadAndReadingNowWithCompletion:(CDUnknownBlockType)arg1;
- (id)updateWantToReadWithCompletion:(CDUnknownBlockType)arg1;
- (id)updateReadingNowWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateBitrateForItemWithAdamID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)audiobookStoreEnabledWithCompletion:(CDUnknownBlockType)arg1;

@end
