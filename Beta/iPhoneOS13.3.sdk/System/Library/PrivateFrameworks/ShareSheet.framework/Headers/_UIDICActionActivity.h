/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <ShareSheet/UIActivity.h>

@class NSString;

@interface _UIDICActionActivity : UIActivity

{
    NSString *_actionActivityType;
    NSString *_activityImageName;
    NSString *_localizedTitle;
    CDUnknownBlockType _activityPerformingHandler;
    CDUnknownBlockType _activityFinishedPerformingHandler;
}

@property (copy, nonatomic) CDUnknownBlockType activityPerformingHandler;
@property (copy, nonatomic) CDUnknownBlockType activityFinishedPerformingHandler;

+ (long long)activityCategory;
+ (id)newPreviewActionActivity;
+ (id)newLegacyDelegationActionActivityForPrint;
+ (id)newLegacyDelegationActionActivityForCopy;
+ (id)newLegacyDelegationActionActivityForSaveToCameraRoll;

- (id)description;
- (id)activityType;
- (void)_cleanup;
- (id)_systemImageName;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (void)performActivity;
- (id)initWithActivityType:(id)arg1 activityImageName:(id)arg2 localizedTitle:(id)arg3;

@end
