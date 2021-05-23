/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

#import <HMFoundation/HMFAssertion.h>

@interface HMFPowerAssertion : HMFAssertion

{
    unsigned int _identifier;
}

@property (nonatomic) unsigned int identifier;

- (void)dealloc;
- (void)invalidate;
- (id)initWithName:(id)arg1;

@end
