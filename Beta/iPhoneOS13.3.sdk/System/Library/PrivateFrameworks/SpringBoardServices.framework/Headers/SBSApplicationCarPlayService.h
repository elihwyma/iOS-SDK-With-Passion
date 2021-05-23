/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <Foundation/NSObject.h>

@interface SBSApplicationCarPlayService : NSObject

- (void)fetchIconStateForVehicleId:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setIconState:(id)arg1 hiddenIcons:(id)arg2 forVehicleId:(id)arg3;
- (void)resetIconStateForVehicleId:(id)arg1;
- (void)fetchApplicationIconInformationForBundleIdentifier:(id)arg1 inVehicle:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;

@end
