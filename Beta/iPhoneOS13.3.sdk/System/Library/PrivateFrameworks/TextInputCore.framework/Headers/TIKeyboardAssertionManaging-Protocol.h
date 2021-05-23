/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/Swift-Protocol.h>

@protocol TIKeyboardAssertionManagerDelegate;

@protocol TIKeyboardAssertionManaging <Swift>

@property (nonatomic, readonly) _Bool hasAssertions;
@property (nonatomic, readonly) _Bool hasBackgroundActivityAssertions;
@property (nonatomic) id <TIKeyboardAssertionManagerDelegate> delegate;

- (unsigned short)releaseBackgroundActivityAssertion;
- (unsigned short)addAssertionForObject: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAssertionForObject: /* Error: Ran out of types for this method. */;
- (unsigned short)retainBackgroundActivityAssertion;

@end
