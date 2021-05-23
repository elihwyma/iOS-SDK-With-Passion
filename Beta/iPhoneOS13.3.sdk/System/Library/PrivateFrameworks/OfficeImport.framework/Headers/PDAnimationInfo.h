/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class PDAnimationInfoData, PDMediaNode;

__attribute__((visibility("hidden")))
@interface PDAnimationInfo : NSObject

{
    PDAnimationInfoData *mEntrance;
    PDAnimationInfoData *mExit;
    PDAnimationInfoData *mMedia;
    PDMediaNode *mediaNode;
}

@property (retain, nonatomic) PDAnimationInfoData *mediaData;
@property (retain, nonatomic) PDMediaNode *mediaNode;

- (id)description;
- (void)setEntranceData:(id)arg1;
- (id)entranceData;
- (void)setExitData:(id)arg1;
- (id)exitData;

@end
