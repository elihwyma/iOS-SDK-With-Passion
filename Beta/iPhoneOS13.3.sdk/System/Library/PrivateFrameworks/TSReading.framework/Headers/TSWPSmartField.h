/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSPObject.h>

#import <TSReading/Swift-Protocol.h>

@class TSWPStorage;

@interface TSWPSmartField : TSPObject <Swift>

{
    TSWPStorage *_parentStorage;
    unsigned long long _lastTableIndex;
}

@property (nonatomic) TSWPStorage *parentStorage;
@property (nonatomic, readonly) unsigned int attributeArrayKind;
@property (nonatomic, readonly) int styleAttributeArrayKind;
@property (nonatomic, readonly) struct _NSRange range;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)defaultFieldStyleIdentifier;

- (void)dealloc;
- (id)text;
- (id)initWithContext:(id)arg1;
- (int)elementKind;
- (_Bool)allowsEditing;
- (id)copyWithContext:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (_Bool)allowsPasteAsSmartField;
- (_Bool)canCopy:(struct _NSRange)arg1;

@end
