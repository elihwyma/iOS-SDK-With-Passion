/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface IDSCTClientDataDelegate : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)connectionStateChanged:(id)arg1 connection:(int)arg2 dataConnectionStatusInfo:(id)arg3;
- (void)preferredDataSimChanged:(id)arg1;

@end
