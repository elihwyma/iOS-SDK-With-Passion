/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol FPCollectionDataSourceDelegate;

__attribute__((visibility("hidden")))
@interface _FPUnionDataSource : NSObject

{
    NSArray *_collections;
    _Bool _isRunning;
    id <FPCollectionDataSourceDelegate> delegate;
}

@property (nonatomic, readonly) _Bool hasMoreIncoming;
@property (weak, nonatomic) id <FPCollectionDataSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (void)start;
- (void)dataForCollectionShouldBeReloaded:(id)arg1;
- (void)collection:(id)arg1 didEncounterError:(id)arg2;
- (void)collection:(id)arg1 didUpdateObservedItem:(id)arg2;
- (void)enumerationMightHaveResumed;
- (id)initWithCollections:(id)arg1;
- (void)collection:(id)arg1 didUpdateItems:(id)arg2 replaceItemsByFormerID:(id)arg3 deleteItemsWithIDs:(id)arg4;

@end
