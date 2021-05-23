/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import <Foundation/NSObject.h>

@class FLFollowUpController, NSString;

@interface SUSFollowUpController : NSObject

{
    FLFollowUpController *_followUpController;
    NSString *_identifier;
}

@property (retain, nonatomic) FLFollowUpController *followUpController;
@property (retain, nonatomic) NSString *identifier;

+ (id)sharedController;

- (id)init;
- (void)dealloc;
- (id)getCurrentSUSFollowUpItem;
- (_Bool)isAutoUpdateFollowUpCurrentlyBeingPresented;
- (void)dismissFollowUp;
- (_Bool)isBadgeOnlyFollowUpCurrentlyBeingPresented;
- (void)postFollowUp:(id)arg1;
- (void)dismissBadgeOnlyFollowUp;
- (void)dismissAutoUpdateFollowUp;
- (_Bool)isFollowUpCurrentlyBeingPresented;
- (void)SUSFollowUpControllerBadgeSettings;
- (void)SUSFollowUpControllerUnbadgeSettings;

@end
