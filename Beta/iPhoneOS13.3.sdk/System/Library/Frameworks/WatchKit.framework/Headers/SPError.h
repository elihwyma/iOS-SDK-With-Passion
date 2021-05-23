/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <Foundation/NSObject.h>

@interface SPError : NSObject

+ (id)errorWithCode:(long long)arg1;
+ (id)errorWithCode:(long long)arg1 additionalDescription:(id)arg2;
+ (_Bool)isValidationErrorCode:(long long)arg1;

@end
