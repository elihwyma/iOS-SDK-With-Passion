/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <AppStoreDaemon/ASDLogConfig.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class NSString;

@interface ASDMutableLogConfig : ASDLogConfig <Swift>

@property (copy, nonatomic) NSString *category;
@property (nonatomic) unsigned long long environment;
@property (copy, nonatomic) NSString *subsystem;

@end
