/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REExportedValueEncoder.h>

@interface RELogExportedValueEncoder : REExportedValueEncoder

+ (id)_dateFormatter;

- (void)writeObjectStart:(id)arg1 toStream:(id)arg2;
- (void)writeObjectValuePairToStream:(id)arg1 keyWriter:(CDUnknownBlockType)arg2 valueWriter:(CDUnknownBlockType)arg3 isLast:(_Bool)arg4;
- (void)writeArrayValuePairToStream:(id)arg1 valueWriter:(CDUnknownBlockType)arg2 isLast:(_Bool)arg3;
- (void)writeDictionaryValuePairToStream:(id)arg1 keyWriter:(CDUnknownBlockType)arg2 valueWriter:(CDUnknownBlockType)arg3 isLast:(_Bool)arg4;
- (void)writeNumber:(id)arg1 toStream:(id)arg2;
- (void)writeString:(id)arg1 toStream:(id)arg2;
- (void)writeDate:(id)arg1 toStream:(id)arg2;
- (void)writeNullToStream:(id)arg1;

@end
