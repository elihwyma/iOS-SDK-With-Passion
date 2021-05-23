/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Foundation/NSObject.h>

@class NSString, TPSContentStatusEventsProvider, TPSDuetEventsProvider, TPSPortraitEventsProvider;

@protocol TPSDEventsProviderManagerDelegate;

@interface TPSEventsProviderManager : NSObject

{
    TPSDuetEventsProvider *_duetEventsProvider;
    TPSPortraitEventsProvider *_portraitEventsProvider;
    TPSContentStatusEventsProvider *_contentStatusEventsProvider;
    id <TPSDEventsProviderManagerDelegate> _delegate;
}

@property (weak, nonatomic) id <TPSDEventsProviderManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultManager;

- (id)init;
- (void)queryEvents:(id)arg1 type:(long long)arg2;
- (void)registerWakingCallbackForEvents:(id)arg1 type:(long long)arg2 clientIdentifier:(id)arg3;
- (void)dataProvider:(id)arg1 didFinishQueryWithResults:(id)arg2;
- (void)dataProvider:(id)arg1 didReceiveCallbackWithResult:(id)arg2;
- (long long)_dataTypeForDataProvider:(id)arg1;
- (void)registerCallbackForEvents:(id)arg1 type:(long long)arg2;

@end
