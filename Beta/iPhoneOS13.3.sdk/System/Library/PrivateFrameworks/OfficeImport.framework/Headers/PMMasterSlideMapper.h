/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMMapper.h>

@class PDSlideBase;

__attribute__((visibility("hidden")))
@interface PMMasterSlideMapper : CMMapper

{
    PDSlideBase *_slide;
}

- (id)initWithPDSlide:(id)arg1 parent:(id)arg2;
- (void)mapMasterGraphicsAt:(id)arg1 withState:(id)arg2;

@end
