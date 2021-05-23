/*
 Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <CoreLocation/CLAssertion.h>

@interface CLInUseAssertion : CLAssertion

+ (id)newAssertionForBundleIdentifier:(id)arg1 withReason:(id)arg2;
+ (id)newAssertionForBundle:(id)arg1 withReason:(id)arg2;
+ (id)newAssertionForBundleIdentifier:(id)arg1 bundlePath:(id)arg2 reason:(id)arg3 level:(int)arg4;
+ (id)newAssertionForBundleIdentifier:(id)arg1 withReason:(id)arg2 level:(int)arg3;
+ (id)newAssertionForBundle:(id)arg1 withReason:(id)arg2 level:(int)arg3;

@end
