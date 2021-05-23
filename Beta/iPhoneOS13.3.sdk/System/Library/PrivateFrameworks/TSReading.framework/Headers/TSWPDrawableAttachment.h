/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSWPAttachment.h>

@class TSDDrawableInfo;

@interface TSWPDrawableAttachment : TSWPAttachment

{
    TSDDrawableInfo *_drawableInfo;
    int _hOffsetType;
    double _hOffset;
    int _vOffsetType;
    double _vOffset;
    int _vAlignment;
    double _attachmentAnchorY;
}

@property (retain, nonatomic, readonly) TSDDrawableInfo *drawable;
@property (nonatomic) int hOffsetType;
@property (nonatomic) double hOffset;
@property (nonatomic) int vOffsetType;
@property (nonatomic) double vOffset;
@property (nonatomic, readonly) double descent;
@property (nonatomic) int vAlignment;
@property (nonatomic) double attachmentAnchorY;

+ (void)setPositionerClass:(Class)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)invalidate;
- (_Bool)isDrawable;
- (int)elementKind;
- (_Bool)isAnchored;
- (_Bool)isSearchable;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 drawable:(id)arg2;
- (_Bool)isHTMLWrap;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (unsigned long long)enabledKnobMask;
- (_Bool)specifiesEnabledKnobMask;
- (void)setParentStorage:(id)arg1;
- (id)detachDrawable;
- (void)attachDrawable:(id)arg1;
- (_Bool)isPartitioned;
- (Class)positionerClass;
- (void)infoChanged;
- (id)textStorages;
- (id)textRepresentationForCopy;

@end
