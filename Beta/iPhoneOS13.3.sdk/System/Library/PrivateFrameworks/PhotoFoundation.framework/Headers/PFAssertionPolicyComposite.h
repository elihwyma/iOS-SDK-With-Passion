/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface PFAssertionPolicyComposite : NSObject

{
    NSMutableArray *_policies;
}

@property (readonly) NSArray *policies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)addPolicy:(id)arg1;
- (void)notifyAssertion:(id)arg1;

@end
