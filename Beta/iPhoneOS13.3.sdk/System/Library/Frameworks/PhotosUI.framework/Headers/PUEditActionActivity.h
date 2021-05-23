/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIActivity.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUEditActionActivity : UIActivity

{
    NSString *_actionName;
    NSString *_systemImageName;
    CDUnknownBlockType _performActivityActionHandler;
    CDUnknownBlockType _canPerformActivityActionHandler;
    NSString *_internalActivityType;
    CDUnknownBlockType _activityBlock;
}

@property (retain, nonatomic) NSString *internalActivityType;
@property (copy, nonatomic) CDUnknownBlockType activityBlock;
@property (copy, nonatomic) NSString *actionName;
@property (copy, nonatomic) NSString *systemImageName;
@property (copy, nonatomic) CDUnknownBlockType performActivityActionHandler;
@property (copy, nonatomic) CDUnknownBlockType canPerformActivityActionHandler;

+ (long long)activityCategory;

- (id)activityType;
- (id)_systemImageName;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (void)performActivity;
- (id)initWithActionName:(id)arg1 activityType:(id)arg2 systemImageName:(id)arg3;

@end
