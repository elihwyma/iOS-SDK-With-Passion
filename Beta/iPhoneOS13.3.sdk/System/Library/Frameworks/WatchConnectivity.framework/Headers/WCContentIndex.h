/*
 Image: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
 */

#import <NSObject.h>

@class NSArray, NSMutableArray, NSOperationQueue, NSSet, NSString, NSURL;

@interface WCContentIndex : NSObject

{
    _Bool _invalidated;
    NSURL *_itemURL;
    NSOperationQueue *_operationQueue;
    NSMutableArray *_cachedContentIndex;
    id _lastGenerationIdentifier;
}

@property (nonatomic) _Bool invalidated;
@property (retain, nonatomic) NSURL *itemURL;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSMutableArray *cachedContentIndex;
@property (retain, nonatomic) id lastGenerationIdentifier;
@property (copy, nonatomic, readonly) NSArray *index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSURL *presentedItemURL;
@property (retain, readonly) NSOperationQueue *presentedItemOperationQueue;
@property (copy, readonly) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;

- (_Bool)isEqual:(id)arg1;
- (void)invalidate;
- (void)presentedItemDidChange;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (void)commit;
- (void)loadContentIfNecessary;
- (id)initWithContainingFolder:(id)arg1;
- (void)addContentIdentifier:(id)arg1;
- (void)removeContentIdentifier:(id)arg1;

@end
