/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@interface REExportedValueEncoder : NSObject

{
    unsigned long long _options;
}

- (id)initWithOptions:(unsigned long long)arg1;
- (void)_writeValue:(id)arg1 toStream:(id)arg2 depth:(unsigned long long)arg3 needsIndent:(_Bool)arg4;
- (void)writeExportedValue:(id)arg1 toStream:(id)arg2;
- (void)writeObjectStart:(id)arg1 toStream:(id)arg2;
- (void)writeObjectValuePairToStream:(id)arg1 keyWriter:(CDUnknownBlockType)arg2 valueWriter:(CDUnknownBlockType)arg3 isLast:(_Bool)arg4;
- (void)writeObjectEnd:(id)arg1 toStream:(id)arg2;
- (void)_writeCollection:(id)arg1 toStream:(id)arg2 startBlock:(CDUnknownBlockType)arg3 writerBlock:(CDUnknownBlockType)arg4 endBlock:(CDUnknownBlockType)arg5 wantsHeader:(_Bool)arg6 depth:(unsigned long long)arg7;
- (void)writeArrayStartToStream:(id)arg1;
- (void)writeArrayValuePairToStream:(id)arg1 valueWriter:(CDUnknownBlockType)arg2 isLast:(_Bool)arg3;
- (void)writeArrayEndToStream:(id)arg1;
- (_Bool)writesArrayHeader;
- (void)writeDictionaryStartToStream:(id)arg1;
- (void)writeDictionaryValuePairToStream:(id)arg1 keyWriter:(CDUnknownBlockType)arg2 valueWriter:(CDUnknownBlockType)arg3 isLast:(_Bool)arg4;
- (void)writeDictionaryEndToStream:(id)arg1;
- (_Bool)writesDictionaryHeader;
- (void)writeUnsupportedObject:(id)arg1 toStream:(id)arg2;
- (void)writeNumber:(id)arg1 toStream:(id)arg2;
- (void)writeString:(id)arg1 toStream:(id)arg2;
- (void)writeDate:(id)arg1 toStream:(id)arg2;
- (void)writeNullToStream:(id)arg1;
- (id)dataFromExportedValue:(id)arg1;
- (id)_namesArrayFromArray:(id)arg1;

@end
