/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OADTabStop : NSObject

{
    unsigned char mAlign;
    int mPosition;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (int)position;
- (void)setPosition:(int)arg1;
- (unsigned char)align;
- (void)setAlign:(unsigned char)arg1;

@end
