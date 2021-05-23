/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PDPlaceholder : NSObject

{
    int mType;
    int mOrientation;
    int mSize;
    unsigned int mIndex;
    int mBoundsTrack;
}

+ (_Bool)isTextType:(int)arg1;
+ (_Bool)isNonTextType:(int)arg1;

- (id)init;
- (id)description;
- (int)type;
- (void)setType:(int)arg1;
- (int)size;
- (unsigned int)index;
- (int)orientation;
- (void)setOrientation:(int)arg1;
- (void)setSize:(int)arg1;
- (void)setIndex:(unsigned int)arg1;
- (int)boundsTrack;
- (void)setBoundsTrack:(int)arg1;

@end
