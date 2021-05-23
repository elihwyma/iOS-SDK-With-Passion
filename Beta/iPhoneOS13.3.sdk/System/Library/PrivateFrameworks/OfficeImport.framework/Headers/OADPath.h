/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADPath : NSObject

{
    struct CGSize mSize;
    NSMutableArray *mElements;
    int mFillMode;
    _Bool mStroked;
}

- (id)init;
- (id)description;
- (struct CGSize)size;
- (void)setSize:(struct CGSize)arg1;
- (id)elementAtIndex:(unsigned long long)arg1;
- (void)addElement:(id)arg1;
- (void)setFillMode:(int)arg1;
- (unsigned long long)elementCount;
- (int)fillMode;
- (_Bool)stroked;
- (void)setStroked:(_Bool)arg1;

@end
