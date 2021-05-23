/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <TSReading/TSDDrawableInfo.h>

@class SXTextExclusionPath;

@interface SXTextTangierAttachmentInfo : TSDDrawableInfo

{
    SXTextExclusionPath *_exclusionPath;
    struct _NSRange _actualRange;
}

@property (retain, nonatomic) SXTextExclusionPath *exclusionPath;
@property (nonatomic) struct _NSRange actualRange;

- (Class)layoutClass;
- (Class)repClass;

@end
