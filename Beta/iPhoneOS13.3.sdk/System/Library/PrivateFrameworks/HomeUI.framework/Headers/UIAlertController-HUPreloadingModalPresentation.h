/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIAlertController.h>

#import <HomeUI/Swift-Protocol.h>

@class NSString;

@interface UIAlertController (HUPreloadingModalPresentation) <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)alertControllerForAddingDestinationWithType:(unsigned long long)arg1 andProceed:(CDUnknownBlockType)arg2;
+ (id)alertControllerForAddingHomeWithProceed:(CDUnknownBlockType)arg1;
+ (id)alertControllerForAddingZoneWithProceed:(CDUnknownBlockType)arg1;
+ (id)alertControllerForAddingRoomWithProceed:(CDUnknownBlockType)arg1;
+ (id)alertControllerForAddingServiceGroupWithProceed:(CDUnknownBlockType)arg1;
+ (id)alertControllerForAddingDestinationWithTypeString:(id)arg1 andProceed:(CDUnknownBlockType)arg2;
+ (id)hu_alertControllerForUnimplementedFeature:(id)arg1;
+ (id)hu_alertControllerWithActivityIndicatorAndTitle:(id)arg1;
+ (id)hu_alertControllerForAcknowledgementWithTitle:(id)arg1 message:(id)arg2;
+ (id)hu_actionSheetWithTitle:(id)arg1 message:(id)arg2 anchorView:(id)arg3;

- (id)hu_preloadContent;
- (void)anchorActionSheetIfNeededFrom:(id)arg1;

@end
