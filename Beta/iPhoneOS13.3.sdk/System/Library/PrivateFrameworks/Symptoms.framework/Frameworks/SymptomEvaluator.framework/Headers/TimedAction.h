/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, NSUUID;

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface TimedAction : NSObject

{
    NSObject<OS_dispatch_source> *_timer;
    int _interfaceIndex;
    unsigned long long _target;
    NSUUID *_connectionId;
    NSString *_owner;
    NSDate *_entryTime;
}

@property (nonatomic, readonly) NSUUID *connectionId;
@property (nonatomic, readonly) int interfaceIndex;
@property (nonatomic, readonly) NSString *owner;
@property (nonatomic, readonly) NSDate *entryTime;
@property (nonatomic) unsigned long long target;

- (void)dealloc;
- (id)description;
- (id)initWithConnId:(id)arg1 interfaceIndex:(int)arg2 owner:(id)arg3 target:(unsigned long long)arg4;

@end
