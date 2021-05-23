/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface PBOutlineBulletKey : NSObject <Swift>

{
    unsigned int mSlideId;
    int mTextType;
    unsigned int mPlaceholderIndex;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOutlineBullet:(id)arg1;
- (id)initWithSlideId:(unsigned int)arg1 textType:(int)arg2 placeholderIndex:(unsigned int)arg3;

@end
