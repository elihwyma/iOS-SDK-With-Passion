/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <Foundation/NSObject.h>

@interface SBLegacyServices : NSObject

+ (void)start;
+ (id)workloop;
+ (void)_configure;
+ (void)checkInPorts;
+ (void)setFunction:(void *)arg1 forSymbol:(const char *)arg2;

@end
