/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXTextTangierStorage, TSDInfoGeometry, TSPObject;

@protocol TSDContainerInfo, TSDOwningAttachment;

@interface SXStandaloneTextInfo : NSObject

{
    _Bool floatingAboveText;
    _Bool anchoredToText;
    _Bool inlineWithText;
    _Bool attachedToBodyText;
    TSDInfoGeometry *geometry;
    TSPObject<TSDOwningAttachment> *owningAttachment;
    NSObject<TSDContainerInfo> *parentInfo;
    SXTextTangierStorage *_storage;
}

@property (nonatomic, readonly) SXTextTangierStorage *storage;
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
- (id)initWithStorage:(id)arg1;
- (Class)layoutClass;
- (id)copyWithContext:(id)arg1;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
- (Class)repClass;
- (_Bool)isThemeContent;
- (id)childInfos;
- (_Bool)anchoredToText;
- (_Bool)attachedToBodyText;
- (_Bool)floatingAboveText;
- (_Bool)inlineWithText;

@end
