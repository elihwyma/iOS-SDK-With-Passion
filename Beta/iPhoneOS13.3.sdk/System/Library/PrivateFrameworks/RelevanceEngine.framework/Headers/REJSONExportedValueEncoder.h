/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REExportedValueEncoder.h>

@interface REJSONExportedValueEncoder : REExportedValueEncoder

+ (id)_dateFormatter;

- (void)writeObjectStart:(id)arg1 toStream:(id)arg2;
- (void)writeObjectValuePairToStream:(id)arg1 keyWriter:(CDUnknownBlockType)arg2 valueWriter:(CDUnknownBlockType)arg3 isLast:(_Bool)arg4;
- (void)writeObjectEnd:(id)arg1 toStream:(id)arg2;
- (void)writeArrayStartToStream:(id)arg1;
- (void)writeArrayValuePairToStream:(id)arg1 valueWriter:(CDUnknownBlockType)arg2 isLast:(_Bool)arg3;
- (void)writeArrayEndToStream:(id)arg1;
- (_Bool)writesArrayHeader;
- (void)writeDictionaryStartToStream:(id)arg1;
- (void)writeDictionaryValuePairToStream:(id)arg1 keyWriter:(CDUnknownBlockType)arg2 valueWriter:(CDUnknownBlockType)arg3 isLast:(_Bool)arg4;
- (void)writeDictionaryEndToStream:(id)arg1;
- (_Bool)writesDictionaryHeader;
- (void)writeNumber:(id)arg1 toStream:(id)arg2;
- (void)writeString:(id)arg1 toStream:(id)arg2;
- (void)writeDate:(id)arg1 toStream:(id)arg2;
- (void)writeNullToStream:(id)arg1;
- (void)_writeValueAsJSON:(id)arg1 toStream:(id)arg2;

@end
