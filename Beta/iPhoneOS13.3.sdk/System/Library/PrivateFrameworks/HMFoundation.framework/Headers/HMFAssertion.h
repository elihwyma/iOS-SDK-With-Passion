/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class NSString;

@interface HMFAssertion

{
    _Bool _valid;
    NSString *_name;
}

@property (getter=isValid) _Bool valid;
@property (copy, readonly) NSString *name;
@property (copy, readonly) NSString *uniqueDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)bundleIdentifier;
+ (id)logCategory;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)initWithName:(id)arg1;
- (id)logIdentifier;
- (void)mark;

@end
