/*
 Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableString;

@interface PBTextWriter : NSObject

{
    _Bool _newlinesPrinted;
    long long _indent;
    NSMutableString *_dest;
    NSMutableDictionary *_cachedObjectTypes;
}

- (id)init;
- (id)string;
- (void)dealloc;
- (void)reset;
- (void)_indent;
- (void)_outdent;
- (void)_openBrace;
- (void)_closeBrace;
- (void)_printLine:(_Bool)arg1 format:(id)arg2;
- (void)_printNewlines;
- (void)_writePropertyAndValue:(id)arg1 forObject:(id)arg2;
- (void)_writeResult:(id)arg1 forProperty:(id)arg2 bracePrefix:(id)arg3;
- (_Bool)write:(id)arg1;
- (_Bool)_write:(id)arg1;

@end
