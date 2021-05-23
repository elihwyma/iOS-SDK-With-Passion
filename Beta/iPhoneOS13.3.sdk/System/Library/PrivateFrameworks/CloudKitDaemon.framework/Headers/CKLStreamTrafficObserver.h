/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKLStreamObserver.h>

@class NSMutableDictionary, NSObject;

@protocol OS_dispatch_queue;

@interface CKLStreamTrafficObserver : CKLStreamObserver

{
    CDUnknownBlockType _requestParsedBlock;
    NSMutableDictionary *_requestDictionary;
    NSObject<OS_dispatch_queue> *_printQueue;
}

@property (retain) NSMutableDictionary *requestDictionary;
@property (retain) NSObject<OS_dispatch_queue> *printQueue;
@property (copy, nonatomic) CDUnknownBlockType requestParsedBlock;

- (void)finish;
- (id)initWithLogTypes:(unsigned long long)arg1;
- (void)eventMatched:(id)arg1;
- (void)parseRequestArrayAndPrint:(id)arg1;
- (id)parserFromConfigurationMessage:(id)arg1;

@end
