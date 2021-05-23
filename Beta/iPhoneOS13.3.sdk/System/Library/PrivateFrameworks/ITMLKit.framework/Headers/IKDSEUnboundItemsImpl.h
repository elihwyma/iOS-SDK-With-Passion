/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKChangeSet, IKDataSourceElement, NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface IKDSEUnboundItemsImpl : NSObject

{
    IKDataSourceElement *_dataSourceElement;
    NSArray *_itemElements;
    IKChangeSet *_itemsChangeSet;
}

@property (copy, nonatomic) NSArray *itemElements;
@property (retain, nonatomic) IKChangeSet *itemsChangeSet;
@property (weak, nonatomic, readonly) IKDataSourceElement *dataSourceElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *prototypes;
@property (copy, nonatomic, readonly) NSDictionary *indexTitles;
@property (nonatomic, readonly) NSArray *masterPrototypes;
@property (copy, nonatomic, readonly) NSArray *proxiedItemElements;

- (void)teardown;
- (long long)numberOfItems;
- (id)initWithDataSourceElement:(id)arg1;
- (void)initializeWithElementFactory:(id)arg1;
- (void)configureUpdatesWithImplementation:(id)arg1;
- (void)applyUpdatesWithImplementation:(id)arg1 usingUpdater:(CDUnknownBlockType)arg2;
- (id)prototypeForItemAtIndex:(long long)arg1;
- (id)elementForItemAtIndex:(long long)arg1;
- (long long)indexOfItemForElement:(id)arg1;
- (void)loadIndex:(long long)arg1;
- (void)unloadIndex:(long long)arg1;
- (void)resetUpdates;
- (void)updateStylesUsingUpdater:(CDUnknownBlockType)arg1;

@end
