/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSData.h>

__attribute__((visibility("hidden")))
@interface _NSDispatchData : NSData

+ (_Bool)supportsSecureCoding;

- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)getBytes:(void *)arg1 length:(unsigned long long)arg2;
- (id)_createDispatchData;
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (_Bool)_providesConcreteBacking;
- (id)subdataWithRange:(struct _NSRange)arg1;
- (_Bool)_isDispatchData;
- (void)enumerateByteRangesUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)_allowsDirectEncoding;
- (void)getBytes:(void *)arg1;

@end
