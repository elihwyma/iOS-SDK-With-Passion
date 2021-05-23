/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class BBSectionInfo, NSString;

@interface BLTSectionInfoItem : NSObject

{
    BBSectionInfo *_sectionInfo;
}

@property (retain, nonatomic) BBSectionInfo *sectionInfo;
@property (nonatomic, readonly) NSString *displayName;

@end
