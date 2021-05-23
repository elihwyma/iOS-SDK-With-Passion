/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UISaveToCameraRollActivity.h>

@class PHObjectPlaceholder;

@interface PMSaveVideoActivity : UISaveToCameraRollActivity

{
    PHObjectPlaceholder *_placeholderForCreatedAsset;
}

@property (retain, nonatomic) PHObjectPlaceholder *placeholderForCreatedAsset;

- (id)activityType;
- (void)prepareWithActivityItems:(id)arg1;

@end
