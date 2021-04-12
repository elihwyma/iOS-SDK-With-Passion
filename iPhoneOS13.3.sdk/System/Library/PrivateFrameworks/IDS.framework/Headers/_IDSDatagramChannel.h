//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSDataChannelLinkContext, NSData, NSMutableArray, NSMutableDictionary;
@protocol OS_nw_connection, OS_nw_path_evaluator;

@interface _IDSDatagramChannel : NSObject
{
    BOOL _verboseFunctionalLogging;
    int _socketDescriptor;
    id /* CDUnknownBlockType */ _eventHandler;
    id /* CDUnknownBlockType */ _readHandler;
    id /* CDUnknownBlockType */ _readHandlerWithOptions;
    BOOL _connected;
//     struct os_unfair_lock_s _writeLock;
//     struct os_unfair_lock_s _readLock;
    BOOL _isInvalidated;
    NSObject<OS_nw_connection> *_connection;
    BOOL _hasMetadata;
    BOOL _sentFirstReadLinkInfo;
    BOOL _receivedPreConnectionData;
    BOOL _waitForPreConnectionDataForConnected;
    BOOL _startCalled;
    BOOL _startAutomatically;
    int _osChannelFD;
    NSObject<OS_nw_path_evaluator> *_pathEvaluator;
    IDSDataChannelLinkContext *_cellularLink;
    NSMutableDictionary *_linkContexts;
    BOOL _defaultLinkID;
    NSData *_preConnectionData;
    NSMutableArray *_sendingMetadata;
    BOOL _needsMediaEncryptionInfo;
    NSUInteger _outgoingBytes;
    NSUInteger _incomingBytes;
    double _lastOutgoingStatReport;
    double _lastIncomingStatReport;
    NSMutableDictionary *_MKIArrivalTime;
    NSMutableDictionary *_firstPacketArrivalTimeForMKI;
}

// - (void).cxx_destruct;
- (id)init;

@end

