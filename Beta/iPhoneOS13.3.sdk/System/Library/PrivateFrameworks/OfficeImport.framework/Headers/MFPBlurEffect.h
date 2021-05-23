/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/MFPEffect.h>

__attribute__((visibility("hidden")))
@interface MFPBlurEffect : MFPEffect

{
    float mRadius;
    _Bool mExpandEdge;
}

+ (id)GUID;

- (id)initWithRadius:(float)arg1 expandEdge:(_Bool)arg2;

@end
