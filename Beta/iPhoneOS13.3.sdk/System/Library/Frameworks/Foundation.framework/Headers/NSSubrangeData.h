/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSData.h>

__attribute__((visibility("hidden")))
@interface NSSubrangeData : NSData

{
    struct _NSRange _range;
    NSData *_data;
}

- (id)init;
- (void)dealloc;
- (unsigned long long)length;
- (const void *)bytes;
- (_Bool)_isCompact;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)getBytes:(void *)arg1 length:(unsigned long long)arg2;
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;
- (id)initWithData:(id)arg1 range:(struct _NSRange)arg2;
- (void)getBytes:(void *)arg1;

@end
