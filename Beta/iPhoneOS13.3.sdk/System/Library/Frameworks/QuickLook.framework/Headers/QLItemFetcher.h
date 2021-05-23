/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

@class NSMapTable, NSNumber;

@interface QLItemFetcher : NSObject

{
    NSMapTable *_observersToBlocks;
    long long _fetchingState;
}

@property (nonatomic) long long fetchingState;
@property (readonly) NSNumber *itemSize;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)_notifyObservers;
- (id)shareableItem;
- (_Bool)isLongFetchOperation;
- (void)fetchContentWithAllowedOutputClasses:(id)arg1 inQueue:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)prepareShareableItem:(CDUnknownBlockType)arg1;
- (id)fetchedContent;
- (id)newItemProvider;
- (_Bool)canBeCanceled;
- (void)cancelFetch;
- (void)registerObserver:(id)arg1 withBlock:(CDUnknownBlockType)arg2;

@end
