/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIAction.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIActionMarkedAsWatched : VUIAction

{
    NSString *_itemID;
    NSString *_itemType;
    NSString *_channelID;
}

@property (retain, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSString *itemType;
@property (retain, nonatomic) NSString *channelID;

- (void)performWithTargetResponder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithContextData:(id)arg1;

@end
