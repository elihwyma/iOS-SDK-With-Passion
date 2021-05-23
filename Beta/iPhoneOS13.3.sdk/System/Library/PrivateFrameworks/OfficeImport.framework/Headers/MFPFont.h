/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MFPFont : NSObject

{
    float mSize;
    int mUnit;
    unsigned int mFlags;
    NSString *mName;
}

- (id)name;
- (void)setName:(id)arg1;
- (unsigned int)flags;
- (float)size;
- (int)unit;
- (void)setSize:(float)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setUnit:(int)arg1;
- (struct __CTFont *)createCTFontWithGraphics:(id)arg1;

@end
