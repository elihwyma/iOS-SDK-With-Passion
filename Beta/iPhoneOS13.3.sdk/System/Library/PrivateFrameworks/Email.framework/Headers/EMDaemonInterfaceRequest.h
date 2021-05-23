/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface EMDaemonInterfaceRequest : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long signpostID;

+ (id)signpostLog;
+ (id)systemScopeSignpostLog;
+ (unsigned long long)uniqueRequestID;

@end
