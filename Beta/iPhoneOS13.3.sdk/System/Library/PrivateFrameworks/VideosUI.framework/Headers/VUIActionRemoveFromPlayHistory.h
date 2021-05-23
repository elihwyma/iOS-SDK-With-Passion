/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIAction.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIActionRemoveFromPlayHistory : VUIAction

{
    _Bool _isContinueWatching;
    NSString *_deleteID;
    NSString *_canonicalID;
}

@property (retain, nonatomic) NSString *deleteID;
@property (retain, nonatomic) NSString *canonicalID;
@property (nonatomic) _Bool isContinueWatching;

- (void)performWithTargetResponder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithContextData:(id)arg1 isContinueWatching:(_Bool)arg2;

@end
