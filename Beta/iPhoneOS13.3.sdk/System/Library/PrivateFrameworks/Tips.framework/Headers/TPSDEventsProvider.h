/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Foundation/NSObject.h>

@protocol TPSEventsProviderDelegate;

@interface TPSDEventsProvider : NSObject

{
    id <TPSEventsProviderDelegate> _delegate;
}

@property (weak, nonatomic) id <TPSEventsProviderDelegate> delegate;

- (void)queryEvents:(id)arg1;
- (void)registerEventsForCallback:(id)arg1;
- (void)registerEventsForWakingCallback:(id)arg1 clientIdentifier:(id)arg2;
- (void)deregisterEventsForCallback:(id)arg1;

@end
