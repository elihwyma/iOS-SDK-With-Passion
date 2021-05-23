/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIActivity.h>

@class LSApplicationProxy, NSString;

__attribute__((visibility("hidden")))
@interface _SFOpenWithAppUIActivity : UIActivity

{
    LSApplicationProxy *_appProxy;
    NSString *_filePath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)activityType;
- (void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)_activityImage;
- (void)performActivity;
- (id)initWithApplicationIdentifier:(id)arg1 andFilePath:(id)arg2;

@end
