/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/Swift-Protocol.h>

@protocol HFStringGenerator;

@protocol HFDynamicFormattingValue <Swift>

@property (nonatomic, readonly) id value;
@property (nonatomic, readonly) id <HFStringGenerator> currentFormattedValue;

- (unsigned short)observeFormattedValueChangesWithBlock: /* Error: Ran out of types for this method. */;

@end
