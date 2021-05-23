/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, TCXmlTextWriterProvider;

__attribute__((visibility("hidden")))
@interface TCXmlStreamWriter : NSObject

{
    TCXmlTextWriterProvider *mTextWriterProvider;
    unsigned int mCurrentDepth;
    _Bool mContentAddedToTopElement;
    NSMutableSet *mAddedIds;
}

+ (_Bool)startElementInStream:(struct _xmlTextWriter *)arg1 name:(id)arg2 prefix:(id)arg3 ns:(const char *)arg4;
+ (_Bool)endElementInStream:(struct _xmlTextWriter *)arg1;
+ (_Bool)writeStringToStream:(struct _xmlTextWriter *)arg1 text:(id)arg2;
+ (_Bool)writeAttributeToStream:(struct _xmlTextWriter *)arg1 name:(id)arg2 content:(id)arg3 prefix:(id)arg4 ns:(const char *)arg5;
+ (_Bool)writeNamespaceToStream:(struct _xmlTextWriter *)arg1 prefix:(id)arg2 uri:(const char *)arg3;
+ (_Bool)writeDtdToStream:(struct _xmlTextWriter *)arg1 name:(id)arg2 pubid:(id)arg3 sysid:(id)arg4 subset:(id)arg5;
+ (_Bool)writeAnchorTargetToStream:(struct _xmlTextWriter *)arg1 name:(id)arg2;
+ (_Bool)startPlainElementInStream:(struct _xmlTextWriter *)arg1 name:(id)arg2;
+ (_Bool)writePlainAttributeToStream:(struct _xmlTextWriter *)arg1 name:(id)arg2 content:(id)arg3;
+ (id)newXmlStreamWriterWithZipEntryName:(id)arg1 outputStream:(id)arg2 isCompressed:(_Bool)arg3;
+ (void)resetElementIds;

- (void)dealloc;
- (_Bool)tearDown;
- (_Bool)setUp;
- (_Bool)endElement;
- (_Bool)writeString:(id)arg1;
- (_Bool)isWriting;
- (struct _xmlTextWriter *)textWriter;
- (id)textWriterProvider;
- (_Bool)endElementsToDepth:(unsigned int)arg1;
- (id)initWithTextWriterProvider:(id)arg1;
- (_Bool)startElement:(id)arg1 prefix:(id)arg2 ns:(const char *)arg3;
- (_Bool)writeAttribute:(id)arg1 content:(id)arg2 prefix:(id)arg3 ns:(const char *)arg4;
- (_Bool)writeAttribute:(id)arg1 intContent:(long long)arg2 prefix:(id)arg3 ns:(const char *)arg4;
- (_Bool)writeAttribute:(id)arg1 boolContent:(_Bool)arg2 prefix:(id)arg3 ns:(const char *)arg4;
- (_Bool)writeAttribute:(id)arg1 enumContent:(int)arg2 map:(id)arg3 prefix:(id)arg4 ns:(const char *)arg5;
- (_Bool)writeAttribute:(id)arg1 doubleContent:(double)arg2 prefix:(id)arg3 ns:(const char *)arg4;
- (_Bool)writePlainAttribute:(id)arg1 content:(id)arg2;
- (_Bool)contentAddedToTopElement;
- (_Bool)startPlainElement:(id)arg1;
- (unsigned int)currentDepth;
- (_Bool)writePlainAttribute:(id)arg1 intContent:(long long)arg2;
- (_Bool)writePlainAttribute:(id)arg1 boolContent:(_Bool)arg2;
- (_Bool)writePlainAttribute:(id)arg1 enumContent:(int)arg2 map:(id)arg3;
- (_Bool)writePlainAttribute:(id)arg1 doubleContent:(double)arg2;
- (_Bool)writeElementId:(id)arg1;
- (_Bool)writeNamespace:(id)arg1 uri:(const char *)arg2;
- (_Bool)writeDtd:(id)arg1 pubid:(id)arg2 sysid:(id)arg3 subset:(id)arg4;
- (_Bool)writeAnchorTarget:(id)arg1;

@end
