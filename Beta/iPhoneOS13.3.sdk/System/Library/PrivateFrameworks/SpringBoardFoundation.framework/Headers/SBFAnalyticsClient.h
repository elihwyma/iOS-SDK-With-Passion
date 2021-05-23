/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSString, SBFAnalyticsBackend;

@interface SBFAnalyticsClient : NSObject

{
    SBFAnalyticsBackend *_backend;
    NSString *_significantTimeChangedNotificationName;
}

@property (copy, nonatomic) NSString *significantTimeChangedNotificationName;

+ (id)sharedInstance;

- (void)registerForQueryName:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithBackend:(id)arg1;
- (void)emitEvent:(unsigned long long)arg1 withPayload:(id)arg2;
- (void)_noteSignificantTimeChanged:(id)arg1;
- (void)emitEvent:(unsigned long long)arg1;

@end
