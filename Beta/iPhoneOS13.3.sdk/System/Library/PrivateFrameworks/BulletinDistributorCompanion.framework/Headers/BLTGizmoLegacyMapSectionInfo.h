/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class BBSectionIcon, NSDictionary, NSString;

@interface BLTGizmoLegacyMapSectionInfo : NSObject

{
    NSDictionary *_notificationMap;
    BBSectionIcon *_icon;
    NSString *_displayName;
}

@property (copy, nonatomic, readonly) NSString *mappedSectionID;
@property (copy, nonatomic, readonly) NSString *mappedParentSectionID;
@property (retain, nonatomic) BBSectionIcon *icon;
@property (copy, nonatomic) NSString *displayName;

- (id)initWithNotificationMap:(id)arg1;

@end
