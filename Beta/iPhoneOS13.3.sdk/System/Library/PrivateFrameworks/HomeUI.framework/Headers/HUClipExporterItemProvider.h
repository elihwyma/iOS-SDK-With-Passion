/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIActivityItemProvider.h>

@class NSURL;

@interface HUClipExporterItemProvider : UIActivityItemProvider

{
    NSURL *_clipURL;
}

@property (retain, nonatomic) NSURL *clipURL;

- (id)initWithURL:(id)arg1;
- (id)item;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;

@end
