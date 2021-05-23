/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class BBSectionIcon, NSDictionary, NSString;

@interface BLTSectionInfoListItem : NSObject

{
    NSDictionary *_overrides;
    NSString *_universalSectionID;
    NSString *_overriddenFactorySectionID;
    NSString *_phoneSectionID;
    NSString *_overriddenDisplayName;
    BBSectionIcon *_overriddenIcon;
}

@property (retain) NSDictionary *overrides;
@property (copy) NSString *universalSectionID;
@property (copy) NSString *overriddenFactorySectionID;
@property (copy) NSString *phoneSectionID;
@property (copy) NSString *overriddenDisplayName;
@property (copy) BBSectionIcon *overriddenIcon;

@end
