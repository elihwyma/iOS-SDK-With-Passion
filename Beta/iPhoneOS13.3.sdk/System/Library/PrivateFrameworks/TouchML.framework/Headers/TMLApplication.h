/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@class NSString;

@interface TMLApplication : NSObject

@property (nonatomic, readonly) NSString *hardwareModel;
@property (nonatomic, readonly) NSString *applicationVersion;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
