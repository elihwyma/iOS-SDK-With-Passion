/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class NSString;

@protocol CNScheduler, CNUIPRLikenessProvider;

@interface CNUIPlaceholderProviderFactory : NSObject

{
    id <CNUIPRLikenessProvider> _placeholderProvider;
    id <CNUIPRLikenessProvider> _loadingPlaceholderProvider;
    id <CNScheduler> _resourceLock;
    id <CNScheduler> _highPriorityLock;
}

@property (retain, nonatomic) id <CNScheduler> resourceLock;
@property (retain, nonatomic) id <CNScheduler> highPriorityLock;
@property (readonly) id <CNUIPRLikenessProvider> placeholderProvider;
@property (readonly) id <CNUIPRLikenessProvider> loadingPlaceholderProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;

@end
