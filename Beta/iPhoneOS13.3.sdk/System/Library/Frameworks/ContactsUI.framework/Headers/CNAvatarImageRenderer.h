/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@protocol CNSchedulerProvider, CNUILikenessRendering, CNUIPRLikenessResolver;

@interface CNAvatarImageRenderer : NSObject

{
    id <CNUIPRLikenessResolver> _resolver;
    id <CNUILikenessRendering> _renderer;
    id <CNSchedulerProvider> _schedulerProvider;
}

@property (nonatomic, readonly) id <CNUIPRLikenessResolver> resolver;
@property (nonatomic, readonly) id <CNUILikenessRendering> renderer;
@property (nonatomic, readonly) id <CNSchedulerProvider> schedulerProvider;

+ (id)descriptorForRequiredKeys;

- (id)init;
- (id)initWithSettings:(id)arg1;
- (id)renderAvatarsForContacts:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)renderMonogramForString:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)renderAvatarsForContacts:(id)arg1 scope:(id)arg2 imageHandler:(CDUnknownBlockType)arg3;
- (id)avatarImageForContacts:(id)arg1 scope:(id)arg2;
- (id)renderAvatarsForContacts:(id)arg1 scope:(id)arg2 placeholder:(_Bool)arg3 workScheduler:(id)arg4 imageHandler:(CDUnknownBlockType)arg5;
- (id)renderMonogramForString:(id)arg1 scope:(id)arg2 imageHandler:(CDUnknownBlockType)arg3;
- (id)runScopeBasedImageObservable:(CDUnknownBlockType)arg1 scope:(id)arg2 imageHandler:(CDUnknownBlockType)arg3;
- (id)renderedLikenessesForContacts:(id)arg1 scope:(id)arg2 placeholder:(_Bool)arg3 workScheduler:(id)arg4;
- (id)renderedMonogramObservableForString:(id)arg1 scope:(id)arg2;
- (id)placeholderImageProvider;
- (id)loadingPlaceholderImageProvider;
- (id)renderMonogramForString:(id)arg1 color:(id)arg2 scope:(id)arg3 prohibitedSources:(long long)arg4;
- (id)renderMonogramForContact:(id)arg1 color:(id)arg2 scope:(id)arg3 prohibitedSources:(long long)arg4;

@end
