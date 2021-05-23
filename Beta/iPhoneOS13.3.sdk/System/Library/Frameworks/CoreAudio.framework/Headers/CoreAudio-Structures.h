/*
 Image: /System/Library/Frameworks/CoreAudio.framework/CoreAudio
 */

@class NSObject;

typedef void (*CDUnknownFunctionPointerType)(void);
typedef void (^CDUnknownBlockType)(void);

struct All_Control_Value_Observer;

struct AudioObjectPropertyAddress {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct Client_Side_IO_Gateway {
    unsigned int _field1;
    struct atomic<unsigned int> _field2;
    struct shared_ptr<Client_Side_IO_Host> _field3;
    struct shared_ptr<HALIO::IPC_Client_Transport<Client_Side_IO_Host>> _field4;
};

struct Client_Side_IO_Host;

struct Daemon_Guts;

struct HAL_Server_Lifetime_Events;

struct IPC_Client_Transport<Client_Side_IO_Host>;

struct Listener_List {
    struct unique_ptr<HAL::Client::Listener_List::Listener_List_Impl, std::__1::default_delete<HAL::Client::Listener_List::Listener_List_Impl>> _field1;
};

struct Listener_List_Impl;

struct Manager;

struct ObjectIDMap;

struct Portal;

struct PropertyAddress {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct Property_Identity {
    unsigned int _field1;
    struct PropertyAddress _field2;
    unsigned int _field3;
    int _field4;
};

struct Server_Side_Client_IO_Host;

struct Settings_Storage;

struct XPC_Message_Payload {
    unsigned int _field1;
    unsigned int _field2;
    id _field3;
};

struct __shared_weak_count;

struct atomic<unsigned int> {
    _Atomic unsigned int _field1;
};

struct object {
    NSObject *fObj;
};

struct queue {
    struct object fObj;
};

struct shared_mutex;

struct shared_ptr<AMCP::System::All_Control_Value_Observer> {
    struct All_Control_Value_Observer *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<AMCP::Utility::Settings_Storage> {
    struct Settings_Storage *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<Client_Side_IO_Host> {
    struct Client_Side_IO_Host *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<Daemon_Guts> {
    struct Daemon_Guts *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<HAL::Client::ObjectIDMap> {
    struct ObjectIDMap *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<HAL::Default_Device::Manager> {
    struct Manager *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<HAL::Object_State::Manager> {
    struct Manager *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<HALIO::IPC_Client_Transport<Client_Side_IO_Host>> {
    struct IPC_Client_Transport<Client_Side_IO_Host> *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<Portal> {
    struct Portal *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<Server_Side_Client_IO_Host> {
    struct Server_Side_Client_IO_Host *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<std::__1::shared_mutex> {
    struct shared_mutex *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct unique_ptr<HAL::Client::Listener_List::Listener_List_Impl, std::__1::default_delete<HAL::Client::Listener_List::Listener_List_Impl>> {
    struct __compressed_pair<HAL::Client::Listener_List::Listener_List_Impl *, std::__1::default_delete<HAL::Client::Listener_List::Listener_List_Impl>> {
        struct Listener_List_Impl *_field1;
    } _field1;
};

struct vector<AudioObjectPropertyAddress, std::__1::allocator<AudioObjectPropertyAddress>> {
    struct AudioObjectPropertyAddress *_field1;
    struct AudioObjectPropertyAddress *_field2;
    struct __compressed_pair<AudioObjectPropertyAddress *, std::__1::allocator<AudioObjectPropertyAddress>> {
        struct AudioObjectPropertyAddress *_field1;
    } _field3;
};

struct weak_ptr<HAL_Server_Lifetime_Events> {
    struct HAL_Server_Lifetime_Events *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

// Template types
typedef struct shared_ptr<AMCP::System::All_Control_Value_Observer> {
    struct All_Control_Value_Observer *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_05bb91fa;

typedef struct shared_ptr<AMCP::Utility::Settings_Storage> {
    struct Settings_Storage *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_09b27a3f;

typedef struct shared_ptr<Daemon_Guts> {
    struct Daemon_Guts *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_49302bbc;

typedef struct shared_ptr<HAL::Client::ObjectIDMap> {
    struct ObjectIDMap *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_3c219583;

typedef struct shared_ptr<HAL::Default_Device::Manager> {
    struct Manager *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_3125c406;

typedef struct shared_ptr<HAL::Object_State::Manager> {
    struct Manager *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_5c838a21;

typedef struct shared_ptr<Portal> {
    struct Portal *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_49cded41;

typedef struct shared_ptr<Server_Side_Client_IO_Host> {
    struct Server_Side_Client_IO_Host *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_5a4052be;

typedef struct shared_ptr<std::__1::shared_mutex> {
    struct shared_mutex *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_667dfb54;

typedef struct vector<AudioObjectPropertyAddress, std::__1::allocator<AudioObjectPropertyAddress>> {
    struct AudioObjectPropertyAddress *_field1;
    struct AudioObjectPropertyAddress *_field2;
    struct __compressed_pair<AudioObjectPropertyAddress *, std::__1::allocator<AudioObjectPropertyAddress>> {
        struct AudioObjectPropertyAddress *_field1;
    } _field3;
} vector_9f82871d;

typedef struct weak_ptr<HAL_Server_Lifetime_Events> {
    struct HAL_Server_Lifetime_Events *__ptr_;
    struct __shared_weak_count *__cntrl_;
} weak_ptr_7745b585;
