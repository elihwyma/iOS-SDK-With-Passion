/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIAction.h>

@class IKViewElement, NSString;

__attribute__((visibility("hidden")))
@interface VUIActionUpdateSportsFavorite : VUIAction

{
    IKViewElement *_viewElement;
    NSString *_sportsLeagueID;
    NSString *_sportsTeamName;
}

@property (weak, nonatomic) IKViewElement *viewElement;
@property (copy, nonatomic) NSString *sportsLeagueID;
@property (copy, nonatomic) NSString *sportsTeamName;

- (_Bool)isAccountRequired;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithContextData:(id)arg1 viewElement:(id)arg2;

@end
