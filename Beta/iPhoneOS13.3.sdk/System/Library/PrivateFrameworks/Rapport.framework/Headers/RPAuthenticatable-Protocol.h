/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@class NSObject, NSString;

@protocol OS_dispatch_queue;

@protocol RPAuthenticatable

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned int pairSetupFlags;
@property (nonatomic) unsigned int pairVerifyFlags;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) int passwordType;
@property (nonatomic, readonly) int passwordTypeActual;
@property (copy, nonatomic) CDUnknownBlockType authCompletionHandler;
@property (copy, nonatomic) CDUnknownBlockType showPasswordHandler;
@property (copy, nonatomic) CDUnknownBlockType hidePasswordHandler;
@property (copy, nonatomic) CDUnknownBlockType promptForPasswordHandler;

- (unsigned short)tryPassword: /* Error: Ran out of types for this method. */;

@end
