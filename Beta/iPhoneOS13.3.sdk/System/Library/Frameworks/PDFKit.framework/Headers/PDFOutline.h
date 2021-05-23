/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class NSString, PDFAction, PDFDestination, PDFDocument, PDFOutlinePrivate;

@interface PDFOutline : NSObject

{
    PDFOutlinePrivate *_private;
}

@property (weak, nonatomic, readonly) PDFDocument *document;
@property (nonatomic, readonly) PDFOutline *parent;
@property (nonatomic, readonly) unsigned long long numberOfChildren;
@property (nonatomic, readonly) unsigned long long index;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) _Bool isOpen;
@property (retain, nonatomic) PDFDestination *destination;
@property (retain, nonatomic) PDFAction *action;

- (id)init;
- (void)dealloc;
- (id)_next;
- (void)commonInit;
- (void)_setParent:(id)arg1;
- (void)setDocument:(id)arg1;
- (struct __CFDictionary *)createDictionaryRef;
- (id)childAtIndex:(unsigned long long)arg1;
- (void)invalidateDictionaryRef;
- (id)initWithDictionary:(struct CGPDFDictionary *)arg1 forDocument:(id)arg2 parent:(id)arg3;
- (void)_lazilyLoadChildren;
- (id)_childArray;
- (void)_removeChildAtIndex:(unsigned long long)arg1;
- (_Bool)_childDictionaryReferencesParent:(struct CGPDFDictionary *)arg1;
- (id)_firstChild;
- (id)_previous;
- (id)_lastChild;
- (int)_openDescendantCount;
- (_Bool)_addDestinationToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)_addActionToDictionaryRef:(struct __CFDictionary *)arg1;
- (struct CGPDFDictionary *)_srcDictionaryRef;
- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeFromParent;

@end
