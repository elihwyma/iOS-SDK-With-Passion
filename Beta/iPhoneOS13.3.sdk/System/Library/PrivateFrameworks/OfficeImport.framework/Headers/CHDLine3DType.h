/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CHDLineType.h>

__attribute__((visibility("hidden")))
@interface CHDLine3DType : CHDLineType

{
    int mGapDepth;
}

+ (_Bool)is3DType;

- (id)initWithChart:(id)arg1;
- (void)setGapDepth:(int)arg1;
- (int)gapDepth;

@end
