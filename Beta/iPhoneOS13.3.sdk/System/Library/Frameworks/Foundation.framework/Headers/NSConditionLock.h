/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NSConditionLock : NSObject

{
    void *_priv;
}

@property (readonly) long long condition;
@property (copy) NSString *name;

+ (id)allocWithZone:(struct _NSZone *)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)lock;
- (void)unlock;
- (_Bool)lockBeforeDate:(id)arg1;
- (_Bool)tryLock;
- (id)initWithCondition:(long long)arg1;
- (_Bool)lockWhenCondition:(long long)arg1 beforeDate:(id)arg2;
- (void)lockWhenCondition:(long long)arg1;
- (_Bool)tryLockWhenCondition:(long long)arg1;
- (void)unlockWithCondition:(long long)arg1;

@end
