/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _UIPopoverViewBackgroundComponentView : UIView

{
    NSMutableArray *_replicants;
    NSString *_directionSelector;
}

@property (copy, nonatomic) NSString *directionSelector;

- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)replicate;
- (id)_newReplicant;
- (void)updateReplicants;

@end
