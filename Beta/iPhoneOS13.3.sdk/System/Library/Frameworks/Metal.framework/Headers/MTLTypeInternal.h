/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLType.h>

__attribute__((visibility("hidden")))
@interface MTLTypeInternal : MTLType

{
    unsigned long long _dataType;
}

- (void)dealloc;
- (id)description;
- (unsigned long long)dataType;
- (id)initWithDataType:(unsigned long long)arg1;
- (id)formattedDescription:(unsigned long long)arg1;

@end
