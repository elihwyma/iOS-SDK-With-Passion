//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSPCopying-Protocol.h>

@class NSMutableArray, NSMutableIndexSet, NSObject, TSTTableDataListSegment;
@protocol TSDContainerInfo><TSWPStorageParent;

__attribute__((visibility("hidden")))
@interface TSTTableDataList : TSPObject <TSPCopying>
{
    NSMutableArray *_segments;
    struct unordered_map<TSTTableDataObject *, unsigned int, TSTTableDataObjectHash, TSTTableDataObjectEqual, std::__1::allocator<std::__1::pair<TSTTableDataObject *const, unsigned int>>> _dataToKeyDict;
    NSMutableIndexSet *_unusedKeySet;
    BOOL _isNewForBraveNewCell;
    BOOL _useReverseMap;
    int _listType;
    unsigned int _nextID;
    NSObject<TSDContainerInfo><TSWPStorageParent> *_richTextParentInfo;
    TSTTableDataListSegment *_cachedSegment;
}

+ (id)stringForListType:(int)arg1;
+ (Class)classForUnarchiver:(id)arg1;
@property(nonatomic) TSTTableDataListSegment *cachedSegment; // @synthesize cachedSegment=_cachedSegment;
@property(readonly, nonatomic) BOOL useReverseMap; // @synthesize useReverseMap=_useReverseMap;
@property(nonatomic) unsigned int nextID; // @synthesize nextID=_nextID;
@property(nonatomic) BOOL isNewForBraveNewCell; // @synthesize isNewForBraveNewCell=_isNewForBraveNewCell;
@property(nonatomic) int listType; // @synthesize listType=_listType;
@property(nonatomic) NSObject<TSDContainerInfo><TSWPStorageParent> *richTextParentInfo; // @synthesize richTextParentInfo=_richTextParentInfo;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (id)copyWithContext:(id)arg1;
- (id)listTypeString;
- (void)dropReferences:(unsigned int)arg1 forKey:(unsigned int)arg2 callWillModify:(BOOL)arg3;
- (void)dropReferenceForKey:(unsigned int)arg1 callWillModify:(BOOL)arg2;
- (void)takeReferences:(unsigned int)arg1 forKey:(unsigned int)arg2 callWillModify:(BOOL)arg3;
- (void)takeReferenceForKey:(unsigned int)arg1 callWillModify:(BOOL)arg2;
- (unsigned int)refCountForKey:(unsigned int)arg1;
- (NSUInteger)count;
- (void)replaceConditionalStyleSetsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)replaceFormulasUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)enumerateDataObjectsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (id)objectForKey:(unsigned int)arg1;
- (void)removeObjectForKey:(unsigned int)arg1;
- (unsigned int)setObject:(id)arg1 atSuggestedKey:(unsigned int)arg2 callWillModify:(BOOL)arg3;
- (NSUInteger)p_objectCount;
- (unsigned int)p_nextAvailableKey;
- (void)p_clearReverseMapForObject:(id)arg1 atKey:(unsigned int)arg2;
- (void)p_setObject:(id)arg1 atKey:(unsigned int)arg2 updateReverseMap:(BOOL)arg3;
- (id)p_segmentForKey:(unsigned int)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)packageLocator;
- (id)initWithType:(int)arg1 context:(id)arg2;
- (void)p_setupWithType:(int)arg1 nextKeyID:(unsigned int)arg2;
- (void)p_addInitialSegment;
- (BOOL)p_shouldUseReverseMap;
- (id)styleForKey:(unsigned int)arg1;
- (id)stringForKey:(unsigned int)arg1;
- (id)richTextForKey:(unsigned int)arg1;
- (id)multipleChoiceListFormatForKey:(unsigned int)arg1;
- (id)importWarningSetForKey:(unsigned int)arg1;
- (id)formulaErrorForKey:(unsigned int)arg1;
- (id)controlCellSpecForKey:(unsigned int)arg1;
- (id)formulaForKey:(unsigned int)arg1;
- (id)conditionalStyleSetForKey:(unsigned int)arg1;
- (id)commentStorageForKey:(unsigned int)arg1;
- (id)cellFormatForKey:(unsigned int)arg1;
- (unsigned int)addStyle:(id)arg1 atSuggestedKey:(unsigned int)arg2 callWillModify:(BOOL)arg3;
- (unsigned int)addString:(id)arg1 atSuggestedKey:(unsigned int)arg2 callWillModify:(BOOL)arg3;
- (unsigned int)addRichText:(id)arg1 atSuggestedKey:(unsigned int)arg2 callWillModify:(BOOL)arg3;
- (unsigned int)addMultipleChoiceListFormat:(id)arg1 atSuggestedKey:(unsigned int)arg2 callWillModify:(BOOL)arg3;
- (unsigned int)addImportWarningSet:(id)arg1 atSuggestedKey:(unsigned int)arg2 callWillModify:(BOOL)arg3;
- (unsigned int)addFormulaError:(id)arg1 atSuggestedKey:(unsigned int)arg2 callWillModify:(BOOL)arg3;
- (unsigned int)addControlCellSpec:(id)arg1 atSuggestedKey:(unsigned int)arg2 callWillModify:(BOOL)arg3;
- (unsigned int)addFormula:(id)arg1 atSuggestedKey:(unsigned int)arg2 callWillModify:(BOOL)arg3;
- (unsigned int)addConditionalStyleSet:(id)arg1 atSuggestedKey:(unsigned int)arg2 callWillModify:(BOOL)arg3;
- (unsigned int)addCommentStorage:(id)arg1 atSuggestedKey:(unsigned int)arg2 callWillModify:(BOOL)arg3;
- (unsigned int)addCellFormat:(id)arg1 atSuggestedKey:(unsigned int)arg2 callWillModify:(BOOL)arg3;
- (BOOL)containsFormulas;
- (BOOL)containsControlCellSpecs;
- (id)allRichTextStorages;
- (id)getRefCountsFromDataList;
- (id)reassignCustomFormatUIDForPaste;
- (void)upgradeConditionalStylesToLinkedRefWithTableUID:(const UUIDData_5fbc143e )arg1;
- (void)upgradeCellFormatsU2_0;
- (BOOL)hasDuplicatedElements;

@end

