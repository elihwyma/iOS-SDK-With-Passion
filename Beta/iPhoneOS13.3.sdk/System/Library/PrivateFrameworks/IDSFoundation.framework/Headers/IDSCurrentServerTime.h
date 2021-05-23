/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class IDSCurrentServerTimePair;

@protocol IDSCurrentServerTimeProvider;

@interface IDSCurrentServerTime : NSObject

{
    IDSCurrentServerTimePair *_timePair;
    id <IDSCurrentServerTimeProvider> _serverTimeProvider;
}

@property (retain, nonatomic) id <IDSCurrentServerTimeProvider> serverTimeProvider;
@property (retain) IDSCurrentServerTimePair *timePair;

+ (id)sharedInstance;

- (double)currentServerTimeInterval;
- (id)initWithServerTimeProvider:(id)arg1;
- (void)_storeInitialServerTime;
- (double)_refreshTimeInterval;
- (void)_refreshServerTime;
- (id)currentServerTimeDate;

@end
