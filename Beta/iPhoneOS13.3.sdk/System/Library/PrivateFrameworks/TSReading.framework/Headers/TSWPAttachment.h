/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSPObject.h>

#import <TSReading/Swift-Protocol.h>

@class NSString, TSWPStorage;

@interface TSWPAttachment : TSPObject <Swift>

{
    TSWPStorage *_parentStorage;
}

@property (nonatomic) TSWPStorage *parentStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isDrawable;
@property (nonatomic, readonly) _Bool isAnchored;
@property (nonatomic, readonly) _Bool isPartitioned;
@property (nonatomic, readonly) _Bool isAttachedToBodyText;
@property (nonatomic, readonly) Class positionerClass;
@property (nonatomic, readonly) _Bool isSearchable;
@property (nonatomic, readonly) _Bool specifiesEnabledKnobMask;
@property (nonatomic, readonly) unsigned long long enabledKnobMask;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (unsigned int)attributeArrayKind;

- (_Bool)isEqual:(id)arg1;
- (id)initWithContext:(id)arg1;
- (int)elementKind;
- (unsigned long long)findCharIndex;
- (id)copyWithContext:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (void)infoChanged;
- (_Bool)changesWithPageCount;
- (id)topLevelAttachment;
- (_Bool)changesWithPageNumber;

@end
