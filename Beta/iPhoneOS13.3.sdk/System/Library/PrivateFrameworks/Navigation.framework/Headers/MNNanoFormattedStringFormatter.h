/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MNNanoFormattedStringFormatter : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedFormatter;

- (id)listInstructionForStep:(id)arg1;
- (id)signInstructionsForStep:(id)arg1;

@end
