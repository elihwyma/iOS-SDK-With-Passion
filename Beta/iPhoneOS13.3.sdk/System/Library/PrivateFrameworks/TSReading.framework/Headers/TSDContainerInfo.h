/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSPObject.h>

#import <TSReading/Swift-Protocol.h>

@class NSMutableArray, NSObject, NSString, TSDInfoGeometry;

@protocol TSDContainerInfo, TSDOwningAttachment;

@interface TSDContainerInfo : TSPObject <Swift>

{
    TSDInfoGeometry *mGeometry;
    NSObject<TSDContainerInfo> *mParentInfo;
    NSMutableArray *mChildInfos;
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

- (void)dealloc;
- (Class)layoutClass;
- (id)copyWithContext:(id)arg1;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
- (Class)repClass;
- (_Bool)isThemeContent;
- (id)childInfos;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (void)setChildInfos:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (void)addChildInfo:(id)arg1;
- (void)insertChildInfo:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertChildInfo:(id)arg1 below:(id)arg2;
- (void)insertChildInfo:(id)arg1 above:(id)arg2;
- (void)moveChildren:(id)arg1 toIndexes:(id)arg2;
- (void)removeChildInfo:(id)arg1;
- (void)replaceChildInfo:(id)arg1 with:(id)arg2;

@end
