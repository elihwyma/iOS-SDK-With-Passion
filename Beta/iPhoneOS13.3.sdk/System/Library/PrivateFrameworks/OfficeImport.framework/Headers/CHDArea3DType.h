/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CHDArea2DType.h>

__attribute__((visibility("hidden")))
@interface CHDArea3DType : CHDArea2DType

{
    int mGapDepth;
}

+ (_Bool)is3DType;

- (id)initWithChart:(id)arg1;
- (void)setGapDepth:(int)arg1;
- (int)gapDepth;

@end
