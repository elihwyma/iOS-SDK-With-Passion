/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSTimer;

@protocol IMSendProgressDelegate, IMSendProgressTimeDataSource;

@interface IMSendProgress : NSObject

{
    id <IMSendProgressDelegate> _delegate;
    id _context;
    NSTimer *_sendProgressTimer;
    NSDictionary *_sendingItems;
    float _cachedSendProgress;
    _Bool _wasShowing;
    _Bool _startSendProgressImmediately;
    id <IMSendProgressTimeDataSource> _timeDataSource;
}

@property (copy, nonatomic) NSDictionary *sendingItems;
@property (retain, nonatomic) id <IMSendProgressTimeDataSource> timeDataSource;
@property (weak, nonatomic) id <IMSendProgressDelegate> delegate;
@property (weak, nonatomic) id context;
@property (nonatomic) _Bool startSendProgressImmediately;

+ (Class)_timeDataSourceClass;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void)updateForItems:(id)arg1 forced:(_Bool)arg2;
- (id)initWithDelegate:(id)arg1 context:(id)arg2;
- (_Bool)_hasSendingMessages;
- (void)_scheduleSendProgressTimerIfNeeded;
- (void)_updateSendProgress;
- (void)_resetSendProgress;
- (void)_sendProgressTimerFired:(id)arg1;

@end
