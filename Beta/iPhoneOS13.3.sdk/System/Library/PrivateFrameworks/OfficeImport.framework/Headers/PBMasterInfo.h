/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, PDSlideMaster;

__attribute__((visibility("hidden")))
@interface PBMasterInfo : NSObject

{
    PDSlideMaster *mSlideMaster;
    NSMutableArray *mTgtSlideLayoutArray;
    unsigned int mMainPbRef;
    unsigned int mTitlePbRef;
    NSDictionary *mLayoutMap;
    ChVector_7fbb5a88 *mSrcTextStyling;
    unsigned int mXmlMainMasterId;
    NSMutableDictionary *mXmlLayoutMap;
    _Bool mUseXmlBlobs;
}

@property (nonatomic) unsigned int xmlMainMasterId;
@property (nonatomic) _Bool useXmlBlobs;

- (id)init;
- (void)dealloc;
- (id)slideMaster;
- (id)slideLayoutForXmlLayoutId:(unsigned short)arg1;
- (id)uniqueXmlSlideLayout;
- (void)setSlideMaster:(id)arg1;
- (void)setMainPbRef:(unsigned int)arg1;
- (unsigned int)mainPbRef;
- (void)setTitlePbRef:(unsigned int)arg1;
- (unsigned int)titlePbRef;
- (void)cacheTargetLayoutType:(int)arg1;
- (id)allTargetLayoutTypes;
- (void)cacheSlideLayouts;
- (id)slideLayoutForSlideHolder:(id)arg1;
- (ChVector_7fbb5a88 *)sourceTextStyling;
- (void)setSlideLayout:(id)arg1 forXmlLayoutId:(unsigned short)arg2;

@end
