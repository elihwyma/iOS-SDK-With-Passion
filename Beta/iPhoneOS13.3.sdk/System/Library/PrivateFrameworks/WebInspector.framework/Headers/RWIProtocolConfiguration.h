/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <Foundation/NSObject.h>

@class RWIProtocolCSSDomainEventDispatcher, RWIProtocolConsoleDomainEventDispatcher, RWIProtocolDOMDomainEventDispatcher, RWIProtocolDOMStorageDomainEventDispatcher, RWIProtocolNetworkDomainEventDispatcher, RWIProtocolPageDomainEventDispatcher;

@protocol RWIProtocolCSSDomainHandler, RWIProtocolDOMDebuggerDomainHandler, RWIProtocolDOMDomainHandler, RWIProtocolDOMStorageDomainHandler, RWIProtocolNetworkDomainHandler, RWIProtocolPageDomainHandler;

@interface RWIProtocolConfiguration : NSObject

{
    struct AugmentableInspectorController *_controller;
    id <RWIProtocolCSSDomainHandler> _cssHandler;
    RWIProtocolCSSDomainEventDispatcher *_cssEventDispatcher;
    RWIProtocolConsoleDomainEventDispatcher *_consoleEventDispatcher;
    id <RWIProtocolDOMDomainHandler> _domHandler;
    RWIProtocolDOMDomainEventDispatcher *_domEventDispatcher;
    id <RWIProtocolDOMDebuggerDomainHandler> _domDebuggerHandler;
    id <RWIProtocolDOMStorageDomainHandler> _domStorageHandler;
    RWIProtocolDOMStorageDomainEventDispatcher *_domStorageEventDispatcher;
    id <RWIProtocolNetworkDomainHandler> _networkHandler;
    RWIProtocolNetworkDomainEventDispatcher *_networkEventDispatcher;
    id <RWIProtocolPageDomainHandler> _pageHandler;
    RWIProtocolPageDomainEventDispatcher *_pageEventDispatcher;
}

@property (retain, nonatomic, setter=setCSSHandler:) id <RWIProtocolCSSDomainHandler> cssHandler;
@property (nonatomic, readonly) RWIProtocolCSSDomainEventDispatcher *cssEventDispatcher;
@property (nonatomic, readonly) RWIProtocolConsoleDomainEventDispatcher *consoleEventDispatcher;
@property (retain, nonatomic, setter=setDOMHandler:) id <RWIProtocolDOMDomainHandler> domHandler;
@property (nonatomic, readonly) RWIProtocolDOMDomainEventDispatcher *domEventDispatcher;
@property (retain, nonatomic, setter=setDOMDebuggerHandler:) id <RWIProtocolDOMDebuggerDomainHandler> domDebuggerHandler;
@property (retain, nonatomic, setter=setDOMStorageHandler:) id <RWIProtocolDOMStorageDomainHandler> domStorageHandler;
@property (nonatomic, readonly) RWIProtocolDOMStorageDomainEventDispatcher *domStorageEventDispatcher;
@property (retain, nonatomic, setter=setNetworkHandler:) id <RWIProtocolNetworkDomainHandler> networkHandler;
@property (nonatomic, readonly) RWIProtocolNetworkDomainEventDispatcher *networkEventDispatcher;
@property (retain, nonatomic, setter=setPageHandler:) id <RWIProtocolPageDomainHandler> pageHandler;
@property (nonatomic, readonly) RWIProtocolPageDomainEventDispatcher *pageEventDispatcher;

- (void)dealloc;
- (id)initWithController:(struct AugmentableInspectorController *)arg1;

@end
