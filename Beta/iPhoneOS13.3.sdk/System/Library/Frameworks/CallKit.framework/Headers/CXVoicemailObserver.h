/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol CXVoicemailObserverDataSource, CXVoicemailObserverDelegate, OS_dispatch_queue;

@interface CXVoicemailObserver : NSObject

{
    id <CXVoicemailObserverDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_queue;
    id <CXVoicemailObserverDataSource> _dataSource;
}

@property (weak, nonatomic) id <CXVoicemailObserverDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) id <CXVoicemailObserverDataSource> dataSource;
@property (copy, nonatomic, readonly) NSArray *voicemails;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)_performDelegateCallback:(CDUnknownBlockType)arg1;
- (void)dataSourceVoicemailsChanged:(id)arg1;
- (id)initWithDataSource:(id)arg1 queue:(id)arg2;

@end
