/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSLock, NSString;

@interface PKAssertion : NSObject

{
    NSLock *_invalidationLock;
    _Bool _invalidateWhenBackgrounded;
    NSString *_reason;
    unsigned long long _type;
    CDUnknownBlockType _invalidationHandler;
    NSString *_identifier;
}

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic, readonly) NSString *reason;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic) _Bool invalidateWhenBackgrounded;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;

+ (void)acquireAssertionOfType:(unsigned long long)arg1 withReason:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)preheatConnection;
+ (void)isAssertionValid:(id)arg1 completion:(CDUnknownBlockType)arg2;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (id)initWithType:(unsigned long long)arg1 identifier:(id)arg2 reason:(id)arg3;
- (void)markAsInvalidatedAndNotify;

@end
