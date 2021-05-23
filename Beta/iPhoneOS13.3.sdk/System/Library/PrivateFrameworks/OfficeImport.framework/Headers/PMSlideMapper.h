/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMMapper.h>

@class PDSlide;

__attribute__((visibility("hidden")))
@interface PMSlideMapper : CMMapper

{
    PDSlide *mSlide;
    struct CGRect mRect;
}

- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)styleMatrix;
- (void)mapDrawablesAt:(id)arg1 withState:(id)arg2;
- (struct CGRect)slideRect;
- (id)defaultTheme;
- (id)initWithPDSlide:(id)arg1 slideRect:(struct CGRect)arg2 parent:(id)arg3;
- (void)mapMasterSlideAt:(id)arg1 withState:(id)arg2;
- (id)slideName;
- (void)mapBackgroundAt:(id)arg1 recursive:(_Bool)arg2 withState:(id)arg3;

@end
