//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDInfoUsingObjectPlaceholderGeometry-Protocol.h>
#import <iWorkImport/TSKModel-Protocol.h>
#import <iWorkImport/TSPCopying-Protocol.h>

@class NSObject, TSDInfoGeometry, TSKCollaboratorCursor, TSKSelectionPath, TSPObject;
@protocol TSDContainerInfo, TSDInfoUUIDPathPrefixComponentsProvider, TSDOwningAttachment;

@protocol TSDInfo <NSObject, TSKModel, TSPCopying, TSDInfoUsingObjectPlaceholderGeometry>
@property(readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property(readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property(readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property(readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property(copy, nonatomic) TSDInfoGeometry *geometry;
- (BOOL)isThemeContent;
- (Class)repClass;
- (Class)layoutClass;
- (BOOL)isSelectable;
- (void)clearBackPointerToParentInfoIfNeeded:(NSObject<TSDContainerInfo> *)arg1;
- (void)setPrimitiveGeometry:(TSDInfoGeometry *)arg1;

@optional
- (TSKCollaboratorCursor *)collaboratorCursorForSelectionPath:(TSKSelectionPath *)arg1;
- (id <TSDInfoUUIDPathPrefixComponentsProvider>)uuidPathPrefixComponentsProvider;
@end

