/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UITableViewCell.h>

@class PHSuggestion;

@interface PXExistingSuggestionsDebugViewCell : UITableViewCell

{
    PHSuggestion *_suggestion;
}

@property (retain) PHSuggestion *suggestion;

@end
