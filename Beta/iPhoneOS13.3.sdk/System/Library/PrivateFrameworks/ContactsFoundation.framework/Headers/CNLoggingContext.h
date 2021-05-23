/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface CNLoggingContext : NSObject

{
    NSString *_subsystem;
    NSString *_category;
    void *_aslClient;
    NSObject<OS_dispatch_queue> *_aslQueue;
}

@property (copy, nonatomic, readonly) NSString *category;
@property (copy, nonatomic, readonly) NSString *subsystem;

+ (id)loggingContextWithSubsystem:(id)arg1 category:(id)arg2;

- (id)initWithSubsystem:(id)arg1 category:(id)arg2;
- (void)setupASL;
- (id)loggingName;
- (struct __asl_object_s *)aslClient;
- (id)aslQueue;

@end
