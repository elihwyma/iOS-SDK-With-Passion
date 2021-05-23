/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIButton.h>

@class EKGroupInfo;

@interface EKGroupInfoButton : UIButton

{
    EKGroupInfo *_groupInfo;
}

@property (weak) EKGroupInfo *groupInfo;

@end
