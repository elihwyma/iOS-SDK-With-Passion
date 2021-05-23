/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIAction.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIActionUpdateUpNext : VUIAction

{
    NSString *_state;
    NSString *_itemID;
}

@property (retain, nonatomic) NSString *state;
@property (retain, nonatomic) NSString *itemID;

- (_Bool)isAccountRequired;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithContextData:(id)arg1;

@end
