/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NPKAssertion : NSObject

{
    unsigned long long _type;
    unsigned long long _state;
    NSString *_reason;
}

@property (copy, nonatomic, readonly) NSString *reason;
@property (nonatomic, readonly, getter=isAcquired) _Bool acquired;
@property (nonatomic, readonly) unsigned long long type;
@property (readonly) unsigned long long state;

- (void)invalidateWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithType:(unsigned long long)arg1 reason:(id)arg2;
- (id)_errorWithUnderlyingError:(id)arg1;
- (void)acquireWithCompletion:(CDUnknownBlockType)arg1;

@end
