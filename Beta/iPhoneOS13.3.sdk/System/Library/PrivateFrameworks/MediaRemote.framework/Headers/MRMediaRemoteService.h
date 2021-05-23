/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class MRXPCConnection;

@protocol OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface MRMediaRemoteService : NSObject

{
    const struct {
        CDUnknownFunctionPointerType _field1;
        CDUnknownFunctionPointerType _field2;
        CDUnknownFunctionPointerType _field3;
        CDUnknownFunctionPointerType _field4;
        CDUnknownFunctionPointerType _field5;
        CDUnknownFunctionPointerType _field6;
        CDUnknownFunctionPointerType _field7;
        CDUnknownFunctionPointerType _field8;
        CDUnknownFunctionPointerType _field9;
        CDUnknownFunctionPointerType _field10;
        CDUnknownFunctionPointerType _field11;
        void *_field12;
    } *clientModule;
    const struct {
        void *_field1;
        CDUnknownFunctionPointerType _field2;
        CDUnknownFunctionPointerType _field3;
        CDUnknownFunctionPointerType _field4;
        CDUnknownFunctionPointerType _field5;
        CDUnknownFunctionPointerType _field6;
        CDUnknownFunctionPointerType _field7;
        CDUnknownFunctionPointerType _field8;
    } *browsableContentEndpoint;
    const struct {
        void *_field1;
        CDUnknownFunctionPointerType _field2;
        CDUnknownFunctionPointerType _field3;
        CDUnknownFunctionPointerType _field4;
    } *voiceRecordingEndpoint;
    const struct {
        void *_field1;
        CDUnknownBlockType _field2;
    } *televisionEndpoint;
    const struct {
        void *_field1;
        CDUnknownFunctionPointerType _field2;
    } *agentEndpoint;
    _Bool _isRunning;
    MRXPCConnection *_mrXPCConnection;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_queue> *_clientCallbackQueue;
    NSObject<OS_dispatch_queue> *_clientCallbackPriorityQueue;
    NSObject<OS_dispatch_queue> *_browsableContentQueue;
    NSObject<OS_dispatch_queue> *_voiceInputQueue;
    NSObject<OS_dispatch_queue> *_televisionQueue;
    NSObject<OS_dispatch_queue> *_agentQueue;
}

@property (retain, nonatomic) MRXPCConnection *mrXPCConnection;
@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientCallbackQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientCallbackPriorityQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *browsableContentQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *voiceInputQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *televisionQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *agentQueue;
@property (nonatomic) _Bool isRunning;

@end
