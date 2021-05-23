/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

@class NSData, NSError, NSURLConnection;

__attribute__((visibility("hidden")))
@interface QLThreadInvoker : NSObject

{
    NSURLConnection *_connection;
    NSData *_data;
    NSError *_error;
}

- (id)initWithConnection:(id)arg1 data:(id)arg2 error:(id)arg3;
- (void)connectionDidReceiveData:(id)arg1;
- (void)connectionDidReceiveDataLengthReceived:(id)arg1;
- (void)connectionDidFailWithError:(id)arg1;

@end
