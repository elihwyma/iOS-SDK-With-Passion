/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSString.h>

@interface NSString (AppleMediaServices)

+ (id)_replaceMarkupForMutableAttributedString:(id)arg1 markupType:(long long)arg2;
+ (id)_replaceBreakingSpaceMarkupForMutableAttributedString:(id)arg1;

- (id)ams_replacingPatternWithUsername:(id)arg1;
- (id)ams_replacingMarkupUsingAccount:(id)arg1 shouldUppercase:(_Bool)arg2;

@end
