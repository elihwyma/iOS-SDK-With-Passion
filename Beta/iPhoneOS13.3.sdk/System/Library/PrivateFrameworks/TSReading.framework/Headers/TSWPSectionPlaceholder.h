/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSPObject.h>

@class TPDocumentRoot, TSWPStorage;

@interface TSWPSectionPlaceholder : TSPObject

{
    TPDocumentRoot *_documentRoot;
    TSWPStorage *_parentStorage;
}

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithContext:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)parentStorage;
- (void)setParentStorage:(id)arg1;
- (void)i_ensureHeaderFooterStoragesExistWithStylesheet:(id)arg1;

@end
