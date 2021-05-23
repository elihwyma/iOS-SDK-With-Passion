/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSAKDeserializer : NSObject

{
    id ds;
}

- (void)dealloc;
- (id)deserializeNewData;
- (id)deserializeNewList;
- (id)deserializeNewPList;
- (id)deserializeNewString;
- (id)deserializeData:(id)arg1;
- (id)deserializeString:(id)arg1;
- (id)deserializeList:(id)arg1;
- (id)deserializeListItemIn:(id)arg1 at:(unsigned long long)arg2 length:(unsigned long long)arg3;
- (id)deserializeNewObject;
- (id)deserializePList:(id)arg1;
- (id)deserializePListKeyIn:(id)arg1;
- (id)deserializePListValueIn:(id)arg1 key:(id)arg2 length:(unsigned long long)arg3;
- (id)deserializeNewKeyString;
- (id)initForDeserializerStream:(id)arg1;
- (id)deserializerStream;

@end
