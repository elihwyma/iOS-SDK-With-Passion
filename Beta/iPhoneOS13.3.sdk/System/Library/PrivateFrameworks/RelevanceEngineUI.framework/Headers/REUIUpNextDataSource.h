/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, RERelevanceEngine, REUIRelevanceEngineController;

@protocol REUIRelevanceEngineControllerDelegate;

@interface REUIUpNextDataSource : NSObject

{
    REUIRelevanceEngineController *_controller;
}

@property (nonatomic, readonly) RERelevanceEngine *relevanceEngine;
@property (nonatomic, readonly) NSArray *sectionOrder;
@property (weak, nonatomic) id <REUIRelevanceEngineControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)initWithRelevanceEngine:(id)arg1;
- (id)initWithRelevanceEngine:(id)arg1 sectionOrder:(id)arg2;
- (id)_sectionTitleAtIndex:(unsigned long long)arg1;

@end
