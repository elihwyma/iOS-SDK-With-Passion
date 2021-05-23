/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/_LSValidationToken.h>

__attribute__((visibility("hidden")))
@interface _LSBundleIDValidationToken : _LSValidationToken

+ (_Bool)supportsSecureCoding;
+ (_Bool)isToken:(id)arg1 correctForBundleIdentifier:(id)arg2 connection:(id)arg3;

- (id)initWithBundleIdentifier:(id)arg1;

@end
