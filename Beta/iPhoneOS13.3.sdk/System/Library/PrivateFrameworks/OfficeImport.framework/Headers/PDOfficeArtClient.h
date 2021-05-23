/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString, OADImageRecolorInfo, PDAnimationInfo, PDPlaceholder;

__attribute__((visibility("hidden")))
@interface PDOfficeArtClient : NSObject

{
    OADImageRecolorInfo *mImageRecolorInfo;
    PDPlaceholder *mPlaceholder;
    _Bool mIsComment;
    PDAnimationInfo *mAnimationInfo;
    _Bool mHasOleChart;
    int mInheritedTextStylePlaceholderType;
}

@property (nonatomic) int inheritedTextStylePlaceholderType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (struct CGRect)bounds;
- (void)setPlaceholder:(id)arg1;
- (id)placeholder;
- (_Bool)hasBounds;
- (_Bool)hasPlaceholder;
- (id)animationInfo;
- (void)setImageRecolorInfo:(id)arg1;
- (void)setHasOleChart:(_Bool)arg1;
- (_Bool)hasOleChart;
- (id)imageRecolorInfo;
- (_Bool)isComment;
- (void)setIsComment:(_Bool)arg1;
- (_Bool)hasAnimationInfo;
- (void)setAnimationInfo:(id)arg1;

@end
