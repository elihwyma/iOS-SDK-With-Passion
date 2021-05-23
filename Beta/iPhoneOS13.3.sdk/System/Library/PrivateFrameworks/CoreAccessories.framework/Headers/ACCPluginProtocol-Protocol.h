/*
 Image: /System/Library/PrivateFrameworks/CoreAccessories.framework/CoreAccessories
 */

#import <CoreAccessories/Swift-Protocol.h>

@class NSString;

@protocol ACCPluginProtocol <Swift>

@property (nonatomic, readonly) NSString *pluginName;
@property (nonatomic, readonly) _Bool isRunning;

- (unsigned short)initPlugin;
- (unsigned short)startPlugin;
- (unsigned short)stopPlugin;

@end
