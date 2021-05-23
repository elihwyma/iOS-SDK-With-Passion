/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/Swift-Protocol.h>

@class NSObject, TSDInfoGeometry, TSPObject;

@protocol TSDContainerInfo, TSDOwningAttachment;

@protocol TSDInfo <Swift>

@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (nonatomic, readonly) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic, readonly, getter=isFloatingAboveText) _Bool floatingAboveText;
@property (nonatomic, readonly, getter=isAnchoredToText) _Bool anchoredToText;
@property (nonatomic, readonly, getter=isInlineWithText) _Bool inlineWithText;
@property (nonatomic, readonly, getter=isAttachedToBodyText) _Bool attachedToBodyText;

- (unsigned short)layoutClass;
- (unsigned short)clearBackPointerToParentInfoIfNeeded: /* Error: Ran out of types for this method. */;
- (unsigned short)repClass;
- (unsigned short)isThemeContent;

@end
