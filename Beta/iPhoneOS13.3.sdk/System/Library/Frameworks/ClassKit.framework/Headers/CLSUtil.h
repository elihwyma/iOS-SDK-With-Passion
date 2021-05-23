/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <Foundation/NSObject.h>

@interface CLSUtil : NSObject

+ (void)postNotification:(char *)arg1;
+ (id)stringFromTimeInterval:(double)arg1;
+ (_Bool)isAppleInternalInstall;
+ (id)mediumDateFormatter;
+ (id)mediumStringFromDate:(id)arg1;
+ (id)hashData:(id)arg1 lastHash:(id)arg2;
+ (id)percentNumberFormatter;
+ (id)hashData:(id)arg1 lastHashData:(id)arg2;
+ (id)percentageStringFromNumber:(id)arg1;
+ (id)dataFromPath:(id)arg1 makeBackwardCompatible:(_Bool)arg2;
+ (id)pathFromData:(id)arg1;
+ (id)dataFromError:(id)arg1;
+ (id)errorFromData:(id)arg1;
+ (id)hashArrayOfStrings:(id)arg1 lastHash:(id)arg2;
+ (void)postNotificationAsync:(char *)arg1;

@end
