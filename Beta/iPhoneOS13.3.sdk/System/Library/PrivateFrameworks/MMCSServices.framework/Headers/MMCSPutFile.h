/*
 Image: /System/Library/PrivateFrameworks/MMCSServices.framework/MMCSServices
 */

@class NSData, NSString;

@interface MMCSPutFile

{
    CDUnknownBlockType _block;
    CDUnknownBlockType _updateBlock;
    NSString *_protocolVersion;
    NSData *_authRequestData;
    CDUnknownBlockType _registrationBlock;
}

@property (copy) NSString *protocolVersion;
@property (copy) NSData *authRequestData;
@property (copy) CDUnknownBlockType completionBlock;
@property (copy) CDUnknownBlockType progressUpdateBlock;
@property (copy) CDUnknownBlockType registrationBlock;

- (void)dealloc;
- (void)setProgress:(double)arg1;

@end
