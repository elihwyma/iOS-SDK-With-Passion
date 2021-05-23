/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AVExecutionEnvironment : NSObject

@property (readonly) NSString *platformIdentifier;

+ (void)initialize;
+ (id)currentPlatformIdentifier;
+ (id)sharedExecutionEnvironment;
+ (void)setPlatformIdentifier:(id)arg1 forQueue:(id)arg2;
+ (void)resetPlatformIdentifierForQueue:(id)arg1;

@end
