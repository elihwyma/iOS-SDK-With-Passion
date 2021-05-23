/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UITableViewCell.h>

@class PHSuggestion;

@interface PXSuggesterDebugViewControllerCell : UITableViewCell

{
    PHSuggestion *_suggestion;
}

@property (retain) PHSuggestion *suggestion;

- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)persist:(id)arg1;

@end
