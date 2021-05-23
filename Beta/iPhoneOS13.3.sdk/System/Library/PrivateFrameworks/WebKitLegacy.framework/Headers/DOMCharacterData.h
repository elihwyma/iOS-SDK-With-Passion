/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMNode.h>

@class NSString;

@interface DOMCharacterData : DOMNode

@property (copy) NSString *data;
@property (readonly) unsigned int length;

- (void)appendData:(id)arg1;
- (void)remove;
- (id)nextElementSibling;
- (id)previousElementSibling;
- (id)substringData:(unsigned int)arg1 length:(unsigned int)arg2;
- (void)insertData:(unsigned int)arg1 data:(id)arg2;
- (void)deleteData:(unsigned int)arg1 length:(unsigned int)arg2;
- (void)replaceData:(unsigned int)arg1 length:(unsigned int)arg2 data:(id)arg3;
- (id)substringData:(unsigned int)arg1:(unsigned int)arg2;
- (void)insertData:(unsigned int)arg1:(id)arg2;
- (void)deleteData:(unsigned int)arg1:(unsigned int)arg2;
- (void)replaceData:(unsigned int)arg1:(unsigned int)arg2:(id)arg3;

@end
