/*
 Image: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/WirelessDiagnostics
 */

typedef void (^CDUnknownBlockType)(void);

struct AWDObserverConnection;

struct AWDServerConnection {
    struct shared_ptr<awd::ServerConnectionInfo> _field1;
};

struct ServerConnectionInfo;

struct __shared_weak_count;

struct shared_ptr<AWDObserverConnection> {
    struct AWDObserverConnection *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<awd::ServerConnectionInfo> {
    struct ServerConnectionInfo *_field1;
    struct __shared_weak_count *_field2;
};
