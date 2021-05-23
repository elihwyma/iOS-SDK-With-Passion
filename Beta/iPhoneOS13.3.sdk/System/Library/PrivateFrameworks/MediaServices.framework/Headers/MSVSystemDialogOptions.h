/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSURL;

@interface MSVSystemDialogOptions : NSObject

{
    _Bool _showAsTopmost;
    _Bool _forceModalAlertAppearance;
    _Bool _showOnLockscreen;
    _Bool _dismissOverlaysOnLockscreen;
    NSString *_alertHeader;
    NSString *_alertMessage;
    NSURL *_alertIconURL;
    NSArray *_allowedApplicationBundleIDs;
    NSString *_defaultButtonTitle;
    NSString *_alternateButtonTitle;
}

@property (copy, nonatomic) NSString *alertHeader;
@property (copy, nonatomic) NSString *alertMessage;
@property (copy, nonatomic) NSURL *alertIconURL;
@property (copy, nonatomic) NSArray *allowedApplicationBundleIDs;
@property (copy, nonatomic) NSString *defaultButtonTitle;
@property (copy, nonatomic) NSString *alternateButtonTitle;
@property (nonatomic) _Bool showAsTopmost;
@property (nonatomic) _Bool forceModalAlertAppearance;
@property (nonatomic) _Bool showOnLockscreen;
@property (nonatomic) _Bool dismissOverlaysOnLockscreen;

@end
