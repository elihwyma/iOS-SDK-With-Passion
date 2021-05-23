/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/ENXMLWriter.h>

@interface ENMLWriter : ENXMLWriter

+ (_Bool)validateURLComponents:(id)arg1;
+ (id)emptyNote;

- (id)init;
- (_Bool)startElement:(id)arg1 attributes:(id)arg2;
- (void)startDocumentWithAttributes:(id)arg1;
- (void)startDocument;
- (void)endDocument;
- (id)validateURLAttribute:(id)arg1 inAttributes:(id)arg2;
- (void)writeResourceWithDataHash:(id)arg1 mime:(id)arg2 attributes:(id)arg3;
- (void)writeResource:(id)arg1;
- (void)writeEncryptedInfo:(id)arg1;
- (void)writeTodoWithCheckedState:(_Bool)arg1;

@end
