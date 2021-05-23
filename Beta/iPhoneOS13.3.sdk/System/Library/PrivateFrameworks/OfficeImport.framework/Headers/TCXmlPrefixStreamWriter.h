/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/TCXmlStreamWriter.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TCXmlPrefixStreamWriter : TCXmlStreamWriter

{
    NSMutableArray *mStateStack;
}

- (void)dealloc;
- (id)currentState;
- (_Bool)addElement:(id)arg1;
- (id)pushState;
- (void)popState;
- (_Bool)startElement:(id)arg1;
- (id)pushStateWithElementPrefix:(id)arg1 attributePrefix:(id)arg2;
- (id)currentElementPrefix;
- (id)currentAttributePrefix;
- (_Bool)writeAttribute:(id)arg1 content:(id)arg2;
- (_Bool)writeOneAttributeElementWithName:(id)arg1 attributeName:(id)arg2 content:(id)arg3;
- (_Bool)writeOneAttributeElementWithName:(id)arg1 attributeName:(id)arg2 boolContent:(_Bool)arg3;
- (_Bool)writeOneAttributeElementWithName:(id)arg1 attributeName:(id)arg2 intContent:(long long)arg3;
- (_Bool)writeOneAttributeElementWithName:(id)arg1 attributeName:(id)arg2 enumContent:(int)arg3 map:(id)arg4;
- (_Bool)writeOneAttributeElementWithName:(id)arg1 attributeName:(id)arg2 doubleContent:(double)arg3;
- (void)pushElementPrefix:(id)arg1 attributePrefix:(id)arg2;
- (id)pushStateWithSharedPrefix:(id)arg1;
- (_Bool)writeAttribute:(id)arg1 boolContent:(_Bool)arg2;
- (_Bool)writeAttribute:(id)arg1 intContent:(long long)arg2;
- (_Bool)writeAttribute:(id)arg1 unsignedLongContent:(unsigned long long)arg2;
- (_Bool)writeAttribute:(id)arg1 enumContent:(int)arg2 map:(id)arg3;
- (_Bool)writeAttribute:(id)arg1 doubleContent:(double)arg2;
- (_Bool)writeValAttributeOnlyElementWithName:(id)arg1 content:(id)arg2;
- (_Bool)writeValAttributeOnlyElementWithName:(id)arg1 boolContent:(_Bool)arg2;
- (_Bool)writeValAttributeOnlyElementWithName:(id)arg1 intContent:(long long)arg2;
- (_Bool)writeValAttributeOnlyElementWithName:(id)arg1 enumContent:(int)arg2 map:(id)arg3;
- (_Bool)writeValAttributeOnlyElementWithName:(id)arg1 doubleContent:(double)arg2;
- (id)initWithTextWriterProvider:(id)arg1;
- (_Bool)startOAElement:(id)arg1;
- (_Bool)writeOAAttribute:(id)arg1 content:(id)arg2;
- (void)pushOAState;
- (_Bool)writeOAAttribute:(id)arg1 boolContent:(_Bool)arg2;
- (_Bool)writeOAAttribute:(id)arg1 intContent:(long long)arg2;
- (_Bool)writeOAAttribute:(id)arg1 enumContent:(int)arg2 map:(id)arg3;
- (_Bool)writeOAAttribute:(id)arg1 doubleContent:(double)arg2;
- (_Bool)writeIndexAttribute:(id)arg1 intContent:(unsigned long long)arg2;
- (void)writeTextString:(id)arg1 forElement:(id)arg2;

@end
