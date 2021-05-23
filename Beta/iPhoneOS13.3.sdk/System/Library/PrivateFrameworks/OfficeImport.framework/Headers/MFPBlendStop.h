/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface MFPBlendStop : NSObject

{
    float mFactor;
    float mPosition;
}

- (float)factor;
- (float)position;
- (id)initWithFactor:(float)arg1 position:(float)arg2;

@end
