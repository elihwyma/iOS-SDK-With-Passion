/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSWPTextualAttachment.h>

@class NSString, TSWPStorage;

@interface TSWPFootnoteReferenceAttachment : TSWPTextualAttachment

{
    TSWPStorage *_containedStorage;
    NSString *_customMarkString;
}

@property (retain, nonatomic) TSWPStorage *containedStorage;
@property (retain, nonatomic) NSString *customMarkString;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)initWithContext:(id)arg1;
- (int)elementKind;
- (unsigned long long)findCharIndex;
- (_Bool)isSearchable;
- (id)copyWithContext:(id)arg1;
- (void)checkDebug;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (void)setParentStorage:(id)arg1;
- (id)stringEquivalent;
- (id)initWithContext:(id)arg1 wpStorage:(id)arg2;
- (void)applyMark;
- (void)setContainedStorageParentInfoToStorage:(id)arg1;

@end
