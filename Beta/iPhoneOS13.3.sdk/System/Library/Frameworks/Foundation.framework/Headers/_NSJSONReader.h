/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSError;

__attribute__((visibility("hidden")))
@interface _NSJSONReader : NSObject

{
    id input;
    int kind;
    NSError *error;
}

+ (_Bool)validForJSON:(id)arg1 depth:(unsigned long long)arg2 allowFragments:(_Bool)arg3;

- (id)init;
- (void)dealloc;
- (id)error;
- (void)setError:(id)arg1;
- (unsigned long long)findEncodingFromData:(id)arg1 withBOMSkipLength:(unsigned long long *)arg2;
- (id)parseUTF8JSONData:(id)arg1 skipBytes:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)parseData:(id)arg1 options:(unsigned long long)arg2;
- (id)parseStream:(id)arg1 options:(unsigned long long)arg2;

@end
