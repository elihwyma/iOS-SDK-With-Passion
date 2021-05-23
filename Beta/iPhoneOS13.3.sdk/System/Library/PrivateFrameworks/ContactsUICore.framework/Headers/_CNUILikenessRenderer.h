/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class NSString;

@protocol CNSchedulerProvider, CNUIPRLikenessResolver;

@interface _CNUILikenessRenderer : NSObject

{
    id <CNUIPRLikenessResolver> _likenessResolver;
    id <CNSchedulerProvider> _schedulerProvider;
}

@property (nonatomic, readonly) id <CNUIPRLikenessResolver> likenessResolver;
@property (nonatomic, readonly) id <CNSchedulerProvider> schedulerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;
+ (id)renderedLikenessesForProviders:(id)arg1 scope:(id)arg2;
+ (struct CGImage *)cgImageForLikenessProvider:(id)arg1 pointSize:(struct CGSize)arg2 scale:(double)arg3 style:(unsigned long long)arg4;

- (id)renderedLikenessesForContacts:(id)arg1 scope:(id)arg2 workScheduler:(id)arg3;
- (id)loadingPlaceholderForContactCount:(unsigned long long)arg1 scope:(id)arg2;
- (id)renderedBasicMonogramForString:(id)arg1 color:(id)arg2 scope:(id)arg3 prohibitedSources:(long long)arg4;
- (id)renderedBasicMonogramFromString:(id)arg1 scope:(id)arg2;
- (id)likenessProvidersForContacts:(id)arg1 likenessResolverOptions:(id)arg2 workScheduler:(id)arg3;
- (id)renderedLikenessesForLikenessProviders:(id)arg1 scope:(id)arg2;
- (id)renderedLoadingPlaceholderForContactCount:(unsigned long long)arg1 provider:(id)arg2 scope:(id)arg3;
- (id)initWithLikenessResolver:(id)arg1 schedulerProvider:(id)arg2;

@end
