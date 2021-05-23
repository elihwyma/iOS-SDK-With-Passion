/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class CNContactStore, CNUIMeContactMonitor, NSString;

@protocol CNSchedulerProvider, CNUIPlaceholderProviderFactory;

@interface CNUIPRLikenessLookup : NSObject

{
    long long _prohibitedSources;
    CNContactStore *_contactStore;
    id <CNSchedulerProvider> _schedulerProvider;
    CNUIMeContactMonitor *_meMonitor;
    id <CNUIPlaceholderProviderFactory> _placeholderProviderFactory;
}

@property (retain, nonatomic) CNUIMeContactMonitor *meMonitor;
@property (retain, nonatomic) id <CNUIPlaceholderProviderFactory> placeholderProviderFactory;
@property (nonatomic) long long prohibitedSources;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readonly) id <CNSchedulerProvider> schedulerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;
+ (id)basicMonogramObservableFromString:(id)arg1 color:(id)arg2;
+ (id)contactFuture:(id)arg1 contactStore:(id)arg2 scheduler:(id)arg3;
+ (id)observableFromLikenessProviderBlock:(CDUnknownBlockType)arg1 withScheduler:(id)arg2;
+ (id)photoObservableWithPhotoFuture:(id)arg1 scheduler:(id)arg2;
+ (id)basicMonogramObservableForContactFuture:(id)arg1 monogramColor:(id)arg2;

- (id)initWithContactStore:(id)arg1 schedulerProvider:(id)arg2;
- (_Bool)isMeContact:(id)arg1;
- (id)basicMonogramObservableFromString:(id)arg1 color:(id)arg2;
- (id)resolveLikenessesForContacts:(id)arg1 workScheduler:(id)arg2 withContentHandler:(CDUnknownBlockType)arg3;
- (id)likenessesForContact:(id)arg1 options:(id)arg2 workScheduler:(id)arg3;
- (id)likenessesForContact:(id)arg1 workScheduler:(id)arg2;
- (id)initWithContactStore:(id)arg1 scheduler:(id)arg2;
- (id)initWithContactStore:(id)arg1 scheduler:(id)arg2 meMonitor:(id)arg3;
- (id)initWithContactStore:(id)arg1 schedulerProvider:(id)arg2 meMonitor:(id)arg3;
- (id)likenessObservableForContact:(id)arg1 placeholderProviderFactory:(id)arg2 options:(id)arg3 workScheduler:(id)arg4;
- (id)contentObservableForContact:(id)arg1 placeholderProviderFactory:(id)arg2 options:(id)arg3 workScheduler:(id)arg4;
- (_Bool)mayIncludeSource:(long long)arg1;
- (id)loadingPlaceholderWithPlaceholderProviderFactory:(id)arg1;
- (id)photoFutureForContactFuture:(id)arg1 scheduler:(id)arg2;
- (id)photoFutureForContactFuture:(id)arg1 photoFuture:(id)arg2 allowingFallbackForMeCard:(_Bool)arg3;
- (id)blessedPhotoObservableWithFuture:(id)arg1 contact:(id)arg2 workScheduler:(id)arg3;
- (id)remoteImagesObservableWithContactFuture:(id)arg1 workScheduler:(id)arg2;
- (id)basicMonogramObservableWithContactFuture:(id)arg1 monogramColor:(id)arg2;
- (id)silhouetteWithPlaceholderProviderFactory:(id)arg1 workScheduler:(id)arg2;

@end
