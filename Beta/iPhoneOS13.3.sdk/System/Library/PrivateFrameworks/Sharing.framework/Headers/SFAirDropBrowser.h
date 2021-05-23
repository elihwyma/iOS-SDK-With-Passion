/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@protocol SFAirDropBrowserBatchDelegate, SFAirDropBrowserDelegate, SFAirDropBrowserDiffableDelegate;

@interface SFAirDropBrowser : NSObject

{
    struct __SFBrowser *_browser;
    NSMutableDictionary *_nodes;
    _Bool _shouldDeliverEmptyUpdates;
    NSString *_sessionID;
    NSArray *_people;
    id <SFAirDropBrowserDelegate> _delegate;
    id <SFAirDropBrowserBatchDelegate> _batchDelegate;
    NSString *_sendingAppBundleID;
    NSArray *_urlsBeingShared;
    NSArray *_photosAssetIDs;
    id <SFAirDropBrowserDiffableDelegate> _diffableDelegate;
    NSMutableDictionary *_nodeIDToNode;
}

@property (weak) id <SFAirDropBrowserDiffableDelegate> diffableDelegate;
@property (nonatomic, readonly) NSMutableDictionary *nodeIDToNode;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic, readonly) NSArray *people;
@property (weak) id <SFAirDropBrowserDelegate> delegate;
@property (weak) id <SFAirDropBrowserBatchDelegate> batchDelegate;
@property (copy, nonatomic) NSString *sendingAppBundleID;
@property (copy, nonatomic) NSArray *urlsBeingShared;
@property (copy, nonatomic) NSArray *photosAssetIDs;

- (id)init;
- (void)dealloc;
- (void)pause;
- (void)resume;
- (void)stop;
- (void)start;
- (void)updateDiscoveredPeople;
- (void)handleBrowserCallBack;
- (void)getChangedIndexesForClientPeopleList:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end
