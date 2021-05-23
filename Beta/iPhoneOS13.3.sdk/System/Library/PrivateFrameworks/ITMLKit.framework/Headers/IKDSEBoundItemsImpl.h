/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKAppDataSet, IKChangeSet, IKDataSourceElement, NSArray, NSDictionary, NSMutableDictionary, NSMutableIndexSet, NSString, _IKDSEPrototypeBundle;

__attribute__((visibility("hidden")))
@interface IKDSEBoundItemsImpl : NSObject

{
    _Bool _visibleIndexRangeIsDirty;
    IKDataSourceElement *_dataSourceElement;
    IKChangeSet *_itemsChangeSet;
    IKAppDataSet *_dataSet;
    NSDictionary *_usedPrototypeMappingsByIdentifier;
    _IKDSEPrototypeBundle *_prototypeBundle;
    NSDictionary *_childrenByItemID;
    NSMutableIndexSet *_visibleIndexSet;
    NSMutableDictionary *_proxiedItemElementsByItemID;
}

@property (retain, nonatomic) IKChangeSet *itemsChangeSet;
@property (retain, nonatomic) IKAppDataSet *dataSet;
@property (copy, nonatomic) NSDictionary *usedPrototypeMappingsByIdentifier;
@property (retain, nonatomic) _IKDSEPrototypeBundle *prototypeBundle;
@property (copy, nonatomic) NSDictionary *childrenByItemID;
@property (retain, nonatomic) NSMutableIndexSet *visibleIndexSet;
@property (retain, nonatomic) NSMutableDictionary *proxiedItemElementsByItemID;
@property (weak, nonatomic, readonly) IKDataSourceElement *dataSourceElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *prototypes;
@property (copy, nonatomic, readonly) NSDictionary *indexTitles;
@property (nonatomic, readonly) NSArray *masterPrototypes;
@property (copy, nonatomic, readonly) NSArray *proxiedItemElements;

+ (_Bool)_canProxiedItemElementsBeUpdatedWithLoadedElements;

- (void)teardown;
- (long long)numberOfItems;
- (void)resetImplicitUpdates;
- (id)initWithDataSourceElement:(id)arg1;
- (id)masterPrototypeForItemAtIndex:(unsigned long long)arg1;
- (id)proxyElementForLoadedChildElement:(id)arg1;
- (_Bool)canProxyUnloadedChildElement:(id)arg1;
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
- (id)_elementForItemAtIndex:(long long)arg1;
- (void)_appendVisibleIndexSetWithIndex:(long long)arg1;
- (id)_prototypeMappingForItemAtIndex:(long long)arg1;

@end
