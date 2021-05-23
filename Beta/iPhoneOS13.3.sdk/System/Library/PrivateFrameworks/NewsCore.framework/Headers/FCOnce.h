/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NFUnfairLock;

@interface FCOnce : NSObject

{
    _Bool _finished;
    NFUnfairLock *_lock;
}

@property (nonatomic) _Bool finished;
@property (retain, nonatomic) NFUnfairLock *lock;

- (id)init;
- (id)initWithOptions:(unsigned long long)arg1;
- (_Bool)trigger;
- (_Bool)hasBeenTriggered;
- (void)executeOnce:(CDUnknownBlockType)arg1;

@end
