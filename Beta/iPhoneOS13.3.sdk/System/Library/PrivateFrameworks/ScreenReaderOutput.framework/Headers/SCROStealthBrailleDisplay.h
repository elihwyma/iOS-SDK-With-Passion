/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <ScreenReaderOutput/SCROBrailleDisplay.h>

@interface SCROStealthBrailleDisplay : SCROBrailleDisplay

+ (id)displayWithIOElement:(id)arg1 driverIdentifier:(id)arg2 delegate:(id)arg3;
+ (id)displayWithDelegate:(id)arg1;

- (void)_mainDisplayHandler:(id)arg1;

@end
