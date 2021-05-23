/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKViewElement.h>

@class IKChangeSet, NSArray, NSDictionary;

@protocol IKDataSourceElementImplementing;

@interface IKDataSourceElement : IKViewElement

{
    _Bool _areItemsBound;
    struct {
        _Bool hasMasterPrototypes;
        _Bool hasProxiedItemElements;
        _Bool hasMasterPrototypeForItemAtIndex;
        _Bool hasResetImplicitUpdates;
        _Bool hasProxyElementForLoadedChildElement;
        _Bool hasCanProxyUnloadedChildElement;
    } _implFlags;
    NSDictionary *_indexTitles;
    NSArray *_autoHighlightedChildElements;
    long long _autoHighlightIndex;
    id <IKDataSourceElementImplementing> _impl;
}

@property (copy, nonatomic) NSArray *autoHighlightedChildElements;
@property (nonatomic) long long autoHighlightIndex;
@property (copy, nonatomic) NSDictionary *indexTitles;
@property (nonatomic, readonly) id <IKDataSourceElementImplementing> impl;
@property (nonatomic, readonly) NSArray *masterPrototypes;
@property (copy, nonatomic, readonly) NSArray *proxiedItemElements;
@property (nonatomic, readonly, getter=areItemsBound) _Bool itemsBound;
@property (nonatomic, readonly) NSArray *prototypes;
@property (nonatomic, readonly) IKChangeSet *itemsChangeSet;

+ (unsigned long long)updateTypeForChangeInAttribute:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3;

- (void)dealloc;
- (id)debugDescription;
- (long long)numberOfItems;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (void)configureUpdatesWithElement:(id)arg1;
- (id)applyUpdatesWithElement:(id)arg1;
- (void)resetProperty:(unsigned long long)arg1;
- (void)appDocumentDidMarkStylesDirty;
- (void)resetImplicitUpdates;
- (id)masterPrototypeForItemAtIndex:(unsigned long long)arg1;
- (id)proxyElementForLoadedChildElement:(id)arg1;
- (_Bool)canProxyUnloadedChildElement:(id)arg1;
- (id)_parsedIndexTitlesFromString:(id)arg1;
- (id)prototypeForItemAtIndex:(long long)arg1;
- (id)elementForItemAtIndex:(long long)arg1;
- (long long)indexOfItemForElement:(id)arg1;
- (void)loadIndex:(long long)arg1;
- (void)unloadIndex:(long long)arg1;
- (void)resetUpdates;
- (id)firstItemElement;
- (id)lastItemElement;
- (void)enumerateItemElementsUsingBlock:(CDUnknownBlockType)arg1;

@end
