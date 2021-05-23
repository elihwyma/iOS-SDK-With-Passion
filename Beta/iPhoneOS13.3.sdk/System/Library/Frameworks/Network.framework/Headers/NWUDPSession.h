/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Foundation/NSObject.h>

@class NSString, NWDatagramConnection, NWEndpoint, NWParameters, NWPath;

@interface NWUDPSession : NSObject

{
    _Bool _viable;
    _Bool _hasBetterPath;
    long long _state;
    NWEndpoint *_endpoint;
    NWEndpoint *_resolvedEndpoint;
    NWPath *_currentPath;
    NWDatagramConnection *_connection;
    unsigned long long _maxReadDatagrams;
    CDUnknownBlockType _readHandler;
    unsigned long long _internalMTU;
    NWParameters *_parameters;
}

@property (retain) NWDatagramConnection *connection;
@property unsigned long long maxReadDatagrams;
@property (copy) CDUnknownBlockType readHandler;
@property (retain, nonatomic) NWEndpoint *resolvedEndpoint;
@property (retain, nonatomic) NWPath *currentPath;
@property (nonatomic, getter=isViable) _Bool viable;
@property (nonatomic) _Bool hasBetterPath;
@property (nonatomic) long long state;
@property unsigned long long internalMTU;
@property (readonly) NWParameters *parameters;
@property (nonatomic, readonly) NSString *localPort;
@property (copy, nonatomic, readonly) NSString *privateDescription;
@property (readonly) NWEndpoint *endpoint;
@property (nonatomic, readonly) unsigned long long maximumDatagramLength;

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)dealloc;
- (id)description;
- (void)cancel;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithConnection:(id)arg1;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;
- (void)setupEventHandler;
- (id)initWithUpgradeForSession:(id)arg1;
- (void)tryNextResolvedEndpoint;
- (void)readInternal;
- (void)setReadHandler:(CDUnknownBlockType)arg1 maxDatagrams:(unsigned long long)arg2;
- (void)writeMultipleDatagrams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)writeDatagram:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
