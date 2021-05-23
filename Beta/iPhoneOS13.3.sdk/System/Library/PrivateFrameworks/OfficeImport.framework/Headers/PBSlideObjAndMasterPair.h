/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class PDSlide;

__attribute__((visibility("hidden")))
@interface PBSlideObjAndMasterPair : NSObject

{
    PDSlide *mSlide;
    int mMasterId;
}

+ (id)createPair:(id)arg1 masterId:(int)arg2;

- (id)slide;
- (void)setSlide:(id)arg1 masterId:(int)arg2;
- (int)masterId;

@end
