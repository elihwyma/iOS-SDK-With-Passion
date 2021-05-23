/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface WLKOfferManager : NSObject

{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_offers;
}

@property (retain, nonatomic) NSArray *offers;

+ (id)defaultOfferManager;
+ (id)_offerFullPath;
+ (id)_offerPath;

- (id)init;
- (id)_connection;
- (id)_offers;
- (void)saveOffer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchOffers:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearOffers:(CDUnknownBlockType)arg1;
- (void)_setOffers:(id)arg1;

@end
