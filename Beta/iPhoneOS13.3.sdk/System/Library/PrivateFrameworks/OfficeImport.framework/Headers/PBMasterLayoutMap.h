/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PBMasterLayoutMap : NSObject

{
    NSMutableDictionary *mMasterIdToMasterInfoMap;
    NSMutableDictionary *mTitleIdToMasterIdMap;
}

+ (id)masterLayoutMap;

- (id)init;
- (id)slideLayoutForSlideHolder:(id)arg1;
- (id)masterInfoForMasterId:(int)arg1;
- (int)masterIdForTitleId:(int)arg1;
- (id)masterInfoForSlideHolder:(id)arg1;
- (void)setMasterInfo:(id)arg1 forMasterId:(int)arg2;
- (id)allMasterIds;
- (void)setMasterId:(int)arg1 forTitleId:(int)arg2;

@end
