/*
 Image: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
 */

#import <Foundation/NSObject.h>

@class INWatchdogTimer, NSArray, NSError, NSExtension, NSOperationQueue, NSString, NSUUID;

@protocol OS_dispatch_queue;

@interface INCExtensionRequest : NSObject

{
    NSUUID *_requestIdentifier;
    INWatchdogTimer *_contextTimer;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_requestOperationQueue;
    _Bool _requiresTCC;
    NSExtension *_extension;
    NSError *_error;
    NSString *_identifier;
    NSArray *_extensionInputItems;
}

@property (retain, nonatomic, setter=_setExtension:) NSExtension *_extension;
@property (retain, nonatomic, setter=_setError:) NSError *_error;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSArray *extensionInputItems;
@property (nonatomic) _Bool requiresTCC;

+ (void)initialize;

- (id)initWithIdentifier:(id)arg1;
- (void)reset;
- (id)_requestOperationQueue;
- (void)startRequestForIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_extensionContextHost;
- (void)_resetExtensionContextHostWithCompletion:(CDUnknownBlockType)arg1;
- (void)_resetContextTimer;
- (void)_scheduleContextTimer;

@end
