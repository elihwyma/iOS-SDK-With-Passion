/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class IDSDataChannelLinkContext, NSData, NSMutableArray, NSMutableDictionary;

@protocol OS_nw_connection, OS_nw_path_evaluator;

@interface _IDSDatagramChannel : NSObject

{
    _Bool _verboseFunctionalLogging;
    int _socketDescriptor;
    CDUnknownBlockType _eventHandler;
    CDUnknownBlockType _readHandler;
    CDUnknownBlockType _readHandlerWithOptions;
    _Bool _connected;
    struct os_unfair_lock_s _writeLock;
    struct os_unfair_lock_s _readLock;
    _Bool _isInvalidated;
    NSObject<OS_nw_connection> *_connection;
    _Bool _hasMetadata;
    _Bool _sentFirstReadLinkInfo;
    _Bool _receivedPreConnectionData;
    _Bool _waitForPreConnectionDataForConnected;
    _Bool _startCalled;
    _Bool _startAutomatically;
    int _osChannelFD;
    NSObject<OS_nw_path_evaluator> *_pathEvaluator;
    struct channel *_osChannel;
    struct channel_ring_desc *_osChannelTXRing;
    struct channel_ring_desc *_osChannelRXRing;
    unsigned char _nexus_instance[16];
    IDSDataChannelLinkContext *_cellularLink;
    NSMutableDictionary *_linkContexts;
    BOOL _defaultLinkID;
    NSData *_preConnectionData;
    NSMutableArray *_sendingMetadata;
    _Bool _needsMediaEncryptionInfo;
    unsigned long long _outgoingBytes;
    unsigned long long _incomingBytes;
    double _lastOutgoingStatReport;
    double _lastIncomingStatReport;
    NSMutableDictionary *_MKIArrivalTime;
    NSMutableDictionary *_firstPacketArrivalTimeForMKI;
}

- (id)init;

@end
