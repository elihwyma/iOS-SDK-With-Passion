/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSMutableArray, NSString;

@interface PDDeviceRegistrationTask : NSObject

{
    _Bool _shouldForce;
    NSMutableArray *_completionHandlers;
    NSString *_reason;
}

@property (retain, nonatomic) NSMutableArray *completionHandlers;
@property (copy, nonatomic) NSString *reason;
@property (nonatomic) _Bool shouldForce;

- (id)init;

@end
