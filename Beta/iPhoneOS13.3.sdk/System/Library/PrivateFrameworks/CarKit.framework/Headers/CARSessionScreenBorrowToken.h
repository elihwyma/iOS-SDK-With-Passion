/*
 Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

#import <NSObject.h>

@class CARSession, NSString;

__attribute__((visibility("hidden")))
@interface CARSessionScreenBorrowToken : NSObject

{
    CARSession *_session;
    NSString *_client;
    NSString *_reason;
}

@property (weak, nonatomic, readonly) CARSession *session;
@property (copy, nonatomic, readonly) NSString *client;
@property (copy, nonatomic, readonly) NSString *reason;

- (void)dealloc;
- (void)unborrowToken;
- (id)initWithSession:(id)arg1 client:(id)arg2 reason:(id)arg3;

@end
