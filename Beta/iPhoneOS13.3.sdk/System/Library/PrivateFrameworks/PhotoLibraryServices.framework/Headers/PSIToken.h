/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PSIToken : NSObject

{
    struct __CFString *_string;
    CDStruct_627e0f85 _range;
}

@property (retain, nonatomic) struct __CFString *string;
@property (nonatomic) CDStruct_627e0f85 range;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithString:(struct __CFString *)arg1 range:(CDStruct_627e0f85)arg2;

@end
