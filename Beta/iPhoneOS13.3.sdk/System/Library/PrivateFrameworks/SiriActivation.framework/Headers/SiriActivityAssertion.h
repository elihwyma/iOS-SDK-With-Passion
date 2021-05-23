/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SiriActivityAssertion : NSObject

{
    NSString *_identifier;
    NSString *_reason;
    NSString *_reference;
    double _timestamp;
    CDUnknownBlockType _invalidationBlock;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *reason;
@property (copy, nonatomic, readonly) NSString *reference;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly, getter=isValid) _Bool valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (id)initWithIdentifier:(id)arg1 reference:(id)arg2 reason:(id)arg3 timestamp:(double)arg4 invalidationBlock:(CDUnknownBlockType)arg5;
- (void)invalidatedAtTimestamp:(double)arg1;

@end
