/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface NCNotificationListLegibilityLabelCache : NSObject

{
    NSMutableDictionary *_sectionHeaderViewLegibilityLabelDictionary;
}

@property (retain, nonatomic) NSMutableDictionary *sectionHeaderViewLegibilityLabelDictionary;

+ (id)sharedInstance;

- (id)init;
- (void)clearAll;
- (id)_stringDescriptorForFont:(id)arg1;
- (id)_createLegibilityLabelWithTitle:(id)arg1 font:(id)arg2;
- (id)legibilityLabelForTitle:(id)arg1 forSuperview:(id)arg2 font:(id)arg3;

@end
