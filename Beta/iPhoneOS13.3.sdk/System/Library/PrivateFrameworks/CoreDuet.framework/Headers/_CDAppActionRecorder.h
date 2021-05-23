/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface _CDAppActionRecorder : NSObject

{
    NSString *_previousActivityType;
    NSString *_previousTitle;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSString *previousActivityType;
@property (retain, nonatomic) NSString *previousTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)appActionRecorder;

- (id)init;
- (void)dealloc;
- (void)createConnection;
- (void)recordUserActivityEvent:(id)arg1;
- (void)_recordUserActivityEvent:(id)arg1;
- (void)recordUserActivityEvents:(id)arg1;
- (void)recordUserActivityEventForCollection:(id)arg1;
- (void)recordAppAction:(id)arg1;

@end
