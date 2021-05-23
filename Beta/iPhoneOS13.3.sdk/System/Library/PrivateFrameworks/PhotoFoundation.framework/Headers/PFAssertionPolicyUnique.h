/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <PhotoFoundation/PFAssertionPolicyComposite.h>

@class NSMutableSet;

@interface PFAssertionPolicyUnique : PFAssertionPolicyComposite

{
    NSMutableSet *_signatures;
}

- (id)init;
- (void)notifyAssertion:(id)arg1;

@end
