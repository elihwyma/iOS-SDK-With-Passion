/*
 Image: /System/Library/PrivateFrameworks/SignpostCollection.framework/SignpostCollection
 */

#import <SignpostSupport/SignpostEvent.h>

@interface SignpostEvent (LoggingSupport)

- (id)initWithOSLogEventProxy:(id)arg1;
- (unsigned long long)_extractValuesFromStr:(const char *)arg1 strlen:(unsigned long long)arg2 startIndex:(unsigned long long)arg3 results:(struct metadata_parsing_results *)arg4;
- (_Bool)_processName:(id)arg1 formatterName:(id)arg2 formatType:(id)arg3 value:(id)arg4;
- (id)_parseMetadata:(id)arg1;

@end
