/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

#import <IDSFoundation/Swift-Protocol.h>

@interface IDSMPIdentity : NSObject <Swift>

{
    void *_backingValue;
}

@property (nonatomic, readonly) void *backingValue;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBackingValue:(void *)arg1;

@end
