/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <ITMLKit/IKJSObject.h>

@class VSAccountStore;

__attribute__((visibility("hidden")))
@interface VUIJSAccountChannels : IKJSObject

{
    VSAccountStore *_accountStore;
}

@property (retain, nonatomic) VSAccountStore *accountStore;

- (void)dealloc;
- (id)initWithAppContext:(id)arg1;
- (void)fetchMSOProviderStatus:(id)arg1;
- (void)_sendVideoSubscriberChangedNotificationToTheJavaScript;

@end
