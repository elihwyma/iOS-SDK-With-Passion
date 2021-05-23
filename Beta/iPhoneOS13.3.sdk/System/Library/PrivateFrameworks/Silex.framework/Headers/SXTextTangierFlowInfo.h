/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXTextTangierFlowStorage, TSDInfoGeometry, TSPObject;

@protocol TSDContainerInfo, TSDOwningAttachment, TSDRepDirectLayerHosting;

@interface SXTextTangierFlowInfo : NSObject

{
    _Bool floatingAboveText;
    _Bool anchoredToText;
    _Bool inlineWithText;
    _Bool attachedToBodyText;
    TSDInfoGeometry *geometry;
    TSPObject<TSDOwningAttachment> *owningAttachment;
    NSObject<TSDContainerInfo> *parentInfo;
    SXTextTangierFlowStorage *_storage;
    id <TSDRepDirectLayerHosting> _directLayerHost;
    struct _NSRange _range;
}

@property (nonatomic, readonly) SXTextTangierFlowStorage *storage;
@property (nonatomic, readonly) struct _NSRange range;
@property (weak, nonatomic) id <TSDRepDirectLayerHosting> directLayerHost;
@property (nonatomic, readonly) _Bool hasSpeakableContent;
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
- (id)initWithStorage:(id)arg1 range:(struct _NSRange)arg2;

@end
