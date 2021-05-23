/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@protocol MSServerSideConfigProtocolDelegate;

@interface MSServerSideConfigProtocol : NSObject

{
    id <MSServerSideConfigProtocolDelegate> _delegate;
    NSString *_personID;
    NSURL *_configURL;
    struct __MSSSCPCContext {
        struct __MSSPCContext _super;
        CDUnknownFunctionPointerType didFinishCallback;
        CDUnknownFunctionPointerType didFailAuthenticationCallback;
    } _context;
}

@property (nonatomic) id <MSServerSideConfigProtocolDelegate> delegate;
@property (nonatomic, readonly) NSString *personID;

- (void)dealloc;
- (void)abort;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (void)queryConfiguration;
- (void)_didFinishWithResponse:(id)arg1 error:(id)arg2;
- (void)_didFailAuthenticationWithError:(id)arg1;

@end
