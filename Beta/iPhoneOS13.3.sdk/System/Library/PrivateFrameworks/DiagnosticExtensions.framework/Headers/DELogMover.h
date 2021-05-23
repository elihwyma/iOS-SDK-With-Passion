/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_xpc_object;

@interface DELogMover : NSObject

{
    NSObject<OS_xpc_object> *_conn;
    NSString *_serviceName;
}

@property (nonatomic, readonly) NSString *serviceName;

+ (void)moveSystemLogsWithExtensions:(id)arg1;

- (id)initWithServiceName:(id)arg1;
- (_Bool)sendRequestReturningBooleanResponse:(id)arg1 withSuccessKey:(char *)arg2;

@end
