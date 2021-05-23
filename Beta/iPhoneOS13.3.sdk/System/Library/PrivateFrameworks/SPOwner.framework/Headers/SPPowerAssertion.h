/*
 Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SPPowerAssertion : NSObject

{
    unsigned int _powerAssertionId;
    NSString *_reason;
    double _timeout;
    unsigned long long _type;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy, nonatomic) NSString *reason;
@property (nonatomic) double timeout;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned int powerAssertionId;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)dealloc;
- (void)hold;
- (id)assertionName;
- (id)assertionType;
- (void)drop;
- (void)_drop;
- (id)powerAssertionOption;
- (id)initWithReason:(id)arg1 type:(unsigned long long)arg2 timeout:(double)arg3;

@end
