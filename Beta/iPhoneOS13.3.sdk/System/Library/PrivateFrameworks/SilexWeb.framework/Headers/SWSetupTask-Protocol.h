/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <SilexWeb/Swift-Protocol.h>

@class NSString;

@protocol SWSetupTask <Swift>

@property (nonatomic, readonly) NSString *identifier;

- (unsigned short)performSetup;

@end
