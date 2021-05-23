/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDDrawableInfo.h>

#import <TSReading/Swift-Protocol.h>

@class NSMutableArray, NSObject, NSString, TSDInfoGeometry, TSPObject;

@protocol TSDContainerInfo, TSDOwningAttachment;

@interface TSDGroupInfo : TSDDrawableInfo <Swift>

{
    NSMutableArray *mChildInfos;
    _Bool mIsInDocument;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool matchesObjectPlaceholderGeometry;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (nonatomic, readonly) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic, readonly, getter=isFloatingAboveText) _Bool floatingAboveText;
@property (nonatomic, readonly, getter=isAnchoredToText) _Bool anchoredToText;
@property (nonatomic, readonly, getter=isInlineWithText) _Bool inlineWithText;
@property (nonatomic, readonly, getter=isAttachedToBodyText) _Bool attachedToBodyText;

+ (id)groupGeometryFromChildrenInfos:(id)arg1;
+ (id)p_drawablesToInsertForGroup:(id)arg1 filteredWithTarget:(id)arg2 action:(SEL)arg3 didUngroup:(_Bool *)arg4;
+ (id)drawablesToInsertForGroup:(id)arg1 filteredWithTarget:(id)arg2 action:(SEL)arg3;

- (void)dealloc;
- (Class)layoutClass;
- (id)childEnumerator;
- (void)didCopy;
- (id)copyWithContext:(id)arg1;
- (void)acceptVisitor:(id)arg1;
- (Class)repClass;
- (id)childInfos;
- (void)setChildInfos:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willCopyWithOtherDrawables:(id)arg1;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (_Bool)aspectRatioLocked;
- (void)addChildInfo:(id)arg1;
- (void)insertChildInfo:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertChildInfo:(id)arg1 below:(id)arg2;
- (void)insertChildInfo:(id)arg1 above:(id)arg2;
- (void)moveChildren:(id)arg1 toIndexes:(id)arg2;
- (void)removeChildInfo:(id)arg1;
- (void)replaceChildInfo:(id)arg1 with:(id)arg2;
- (_Bool)canAspectRatioLockBeChangedByUser;
- (id)allNestedChildrenInfos;
- (id)allNestedChildrenInfosIncludingGroups;
- (id)groupedGeometryForChildInfo:(id)arg1;
- (void)removeAllChildrenInDocument:(_Bool)arg1;
- (void)processSelectedStoragesWithStatisticsController:(id)arg1;
- (id)onlyChild;
- (id)ungroupedGeometryForChildInfo:(id)arg1;
- (void)makeChildGeometriesRelativeAndComputeOwnAbsoluteGeometry;
- (void)ensureGeometryFitsChildren;

@end
