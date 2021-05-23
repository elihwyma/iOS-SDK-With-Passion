/*
 Image: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

@class NSObject, NSXPCConnection;

typedef void (*CDUnknownFunctionPointerType)(void);
typedef void (^CDUnknownBlockType)(void);

struct AUAudioUnitV2Bridge_Renderer;

struct AUAudioUnit_XH_PropListener;

struct AUEventSchedule;

struct AUExtRenderingServer {
    CDUnknownFunctionPointerType *_field1;
    unsigned int _field2;
    struct XMachPortSendRight _field3;
    int _field4;
    struct IOThread *_field5;
    _Bool _field6;
    unsigned int _field7;
    int _field8;
    int _field9;
    struct IPCAUSharedMemory _field10;
    struct unique_ptr<SemaphoreIOMessenger_Receiver, std::__1::default_delete<SemaphoreIOMessenger_Receiver>> _field11;
    union AURenderEvent *_field12;
    union AURenderEvent *_field13;
    id _field14;
    CDUnknownBlockType _field15;
    _Bool _field16;
    long long _field17;
    struct AUEventSchedule *_field18;
};

struct AUInputElement;

struct AULocalParameterObserver;

struct AUObserverController {
    id _field1;
    id _field2;
    id _field3;
    _Bool _field4;
    struct set<AUObserverController::AddressOriginator, std::__1::less<AUObserverController::AddressOriginator>, std::__1::allocator<AUObserverController::AddressOriginator>> _field5;
    struct vector<ParameterAutomationEvent, std::__1::allocator<ParameterAutomationEvent>> _field6;
};

struct AUObserverList {
    struct vector<AULocalParameterObserver *, std::__1::allocator<AULocalParameterObserver *>> _field1;
};

struct AUParameterObserverExtendedToken {
    unsigned long long _field1;
};

struct AUProcAndUserData;

struct AUv3InstanceBase {
    CDUnknownFunctionPointerType *_field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    void *_field5;
    struct OpaqueAudioComponentInstance *_field6;
    struct AudioComponentDescription _field7;
    id _field8;
    id _field9;
    struct vector<std::__1::unique_ptr<AUv3InstanceBase::ClientPropertyListener, std::__1::default_delete<AUv3InstanceBase::ClientPropertyListener>>, std::__1::allocator<std::__1::unique_ptr<AUv3InstanceBase::ClientPropertyListener, std::__1::default_delete<AUv3InstanceBase::ClientPropertyListener>>>> _field10;
    struct unique_ptr<AUv3InstanceBase::AllParameterListener, std::__1::default_delete<AUv3InstanceBase::AllParameterListener>> _field11;
    struct AUv3RenderAdapter _field12;
    CDUnknownBlockType _field13;
    CDUnknownBlockType _field14;
    struct ParameterMap _field15;
    struct HostCallbackInfo _field16;
};

struct AUv3RenderAdapter {
    struct CAMutex _field1;
    struct vector<AUv3RenderAdapter::AUInputElement, std::__1::allocator<AUv3RenderAdapter::AUInputElement>> _field2;
    CDUnknownBlockType _field3;
};

struct AddressToParameter;

struct AllParameterListener;

struct AudioComponentDescription {
    unsigned int componentType;
    unsigned int componentSubType;
    unsigned int componentManufacturer;
    unsigned int componentFlags;
    unsigned int componentFlagsMask;
};

struct AudioComponentPluginScanner;

struct AudioComponentRegistrarImpl {
    _Bool _field1;
    _Bool _field2;
    _Bool _field3;
    _Bool _field4;
    id _field5;
    struct function<void (const AudioComponentVector &, AudioComponentVector &)> _field6;
    struct RegistrarService _field7;
    struct RegistrarService _field8;
    id _field9;
    struct AudioComponentVector _field10;
    struct PurgeableDataWrapper _field11;
    struct PurgeableDataWrapper _field12;
    struct unique_ptr<AudioComponentPluginScanner, std::__1::default_delete<AudioComponentPluginScanner>> _field13;
    struct shared_ptr<caulk::synchronized<AUExtensionScanner, caulk::mach::unfair_lock, caulk::empty_atomic_interface<AUExtensionScanner>>> _field14;
};

struct AudioComponentVector {
    struct shared_ptr<APComponent> *__begin_;
    struct shared_ptr<APComponent> *__end_;
    struct __compressed_pair<std::__1::shared_ptr<APComponent>*, std::__1::allocator<std::__1::shared_ptr<APComponent>>> {
        struct shared_ptr<APComponent> *__value_;
    } __end_cap_;
    _Bool mSorted;
};

struct BusPropertyObserver;

struct CADeserializer {
    struct __CFData *_field1;
    char *_field2;
    char *_field3;
    char *_field4;
    _Bool _field5;
};

struct CAMutex {
    CDUnknownFunctionPointerType *_vptr$CAMutex;
    char *mName;
    struct _opaque_pthread_t *mOwner;
    struct _opaque_pthread_mutex_t mMutex;
};

struct CASerializer {
    struct __CFData *_field1;
};

struct ConnectionInfo {
    NSXPCConnection *mConnection;
    int mExtUsePermission;
    int mSDKLinkVersion;
};

struct Element;

struct HostCallbackInfo {
    void *hostUserData;
    CDUnknownFunctionPointerType beatAndTempoProc;
    CDUnknownFunctionPointerType musicalTimeLocationProc;
    CDUnknownFunctionPointerType transportStateProc;
    CDUnknownFunctionPointerType transportStateProc2;
};

struct IOThread;

struct IPCAURenderingClient {
    CDUnknownFunctionPointerType *_vptr$IPCAURenderingClient;
    NSXPCConnection *mXPCConnection;
    _Bool mInitialized;
    _Bool mRenderPrioritySet;
    _Bool mIsOffline;
    _Bool mSentWorkInterval;
    _Bool mMessengerCanSend;
    struct IPCAUSharedMemory mSharedMemory;
    struct unique_ptr<SemaphoreIOMessenger_Sender, std::__1::default_delete<SemaphoreIOMessenger_Sender>> mMessenger;
    unsigned int mWorkIntervalPort;
    double mOutputSampleRate;
    struct CAMutex mMessageBufferLock;
    struct CAMutex mConnectionLock;
    struct HostCallbackInfo mHostCallbackInfo;
    CDUnknownBlockType mMusicalContextBlock;
    CDUnknownBlockType mTransportStateBlock;
    CDUnknownBlockType mMIDIOutputEventBlock;
    int mMIDIOutputBufferSizeHint;
    CDUnknownBlockType mPullInputBlock;
    int mNumInputs;
    int mNumOutputs;
    unsigned int mMaximumFramesToProcess;
    double mLastRenderSampleTime;
};

struct IPCAUSharedMemory {
    CDUnknownFunctionPointerType *_vptr$SharableMemoryBase;
    _Bool mIsOwner;
    _Bool mWasMapped;
    unsigned long long mSize;
    void *mBuffer;
    unsigned int mPort;
    int mFileDesc;
    int mSerial;
    NSObject *mXPCObject;
    unsigned int mHeaderSize;
    struct vector<IPCAUSharedMemoryBase::Element, std::__1::allocator<IPCAUSharedMemoryBase::Element>> mElements;
    unsigned int mMaxFrames;
    _Bool mInitializing;
    unsigned int mMIDIOutputBufferSize;
};

struct NewServerListener;

struct OpaqueAudioComponentInstance;

struct ParameterAutomationEvent;

struct ParameterMap {
    id _field1;
    _Bool _field2;
    struct vector<AUv3InstanceBase::ScopeElementIDObj, std::__1::allocator<AUv3InstanceBase::ScopeElementIDObj>> _field3;
    struct vector<AUv3InstanceBase::ScopeElementIDObj, std::__1::allocator<AUv3InstanceBase::ScopeElementIDObj>> _field4;
    id _field5;
};

struct PropertyListener;

struct PurgeableDataWrapper {
    struct function<NSData *()> _field1;
    id _field2;
};

struct RegistrarService {
    id _field1;
    id _field2;
    id _field3;
};

struct ScopeElementIDObj;

struct SemaphoreIOMessenger_Receiver;

struct SemaphoreIOMessenger_Sender;

struct UIViewController {
    Class _field1;
};

struct XMachPortSendRight {
    unsigned int _field1;
};

struct __CFData;

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>*> *__next_;
};

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *_field1;
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct function<NSData *()> {
    struct __value_func<NSData *()> {
        struct type _field1;
        struct __base<NSData *()> *_field2;
    } _field1;
};

struct function<void ()> {
    struct __value_func<void ()> {
        struct type __buf_;
        struct __base<void ()> *__f_;
    } __f_;
};

struct function<void (AudioComponentVector &, AudioComponentVector &)> {
    struct __value_func<void (AudioComponentVector &, AudioComponentVector &)> {
        struct type __buf_;
        struct __base<void (AudioComponentVector &, AudioComponentVector &)> *__f_;
    } __f_;
};

struct function<void (const AudioComponentVector &, AudioComponentVector &)> {
    struct __value_func<void (const AudioComponentVector &, AudioComponentVector &)> {
        struct type _field1;
        struct __base<void (const AudioComponentVector &, AudioComponentVector &)> *_field2;
    } _field1;
};

struct recursive_mutex {
    struct _opaque_pthread_mutex_t __m_;
};

struct reply_watchdog_factory {
    _Bool mDebugging;
    int mDefaultTimeoutMS;
    struct function<void ()> mTimeoutHandler;
};

struct set<AUObserverController::AddressOriginator, std::__1::less<AUObserverController::AddressOriginator>, std::__1::allocator<AUObserverController::AddressOriginator>> {
    struct __tree<AUObserverController::AddressOriginator, std::__1::less<AUObserverController::AddressOriginator>, std::__1::allocator<AUObserverController::AddressOriginator>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<AUObserverController::AddressOriginator, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::less<AUObserverController::AddressOriginator>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct shared_ptr<APComponent>;

struct shared_ptr<caulk::synchronized<AUExtensionScanner, caulk::mach::unfair_lock, caulk::empty_atomic_interface<AUExtensionScanner>>> {
    struct synchronized<AUExtensionScanner, caulk::mach::unfair_lock, caulk::empty_atomic_interface<AUExtensionScanner>> *_field1;
    struct __shared_weak_count *_field2;
};

struct synchronized<AUExtensionScanner, caulk::mach::unfair_lock, caulk::empty_atomic_interface<AUExtensionScanner>>;

struct type {
    unsigned char __lx[24];
};

struct unique_ptr<AUAudioUnitV2Bridge_Renderer, std::__1::default_delete<AUAudioUnitV2Bridge_Renderer>> {
    struct __compressed_pair<AUAudioUnitV2Bridge_Renderer *, std::__1::default_delete<AUAudioUnitV2Bridge_Renderer>> {
        struct AUAudioUnitV2Bridge_Renderer *__value_;
    } __ptr_;
};

struct unique_ptr<AUProcAndUserData, std::__1::default_delete<AUProcAndUserData>> {
    struct __compressed_pair<AUProcAndUserData *, std::__1::default_delete<AUProcAndUserData>> {
        struct AUProcAndUserData *__value_;
    } __ptr_;
};

struct unique_ptr<AUv3InstanceBase::AllParameterListener, std::__1::default_delete<AUv3InstanceBase::AllParameterListener>> {
    struct __compressed_pair<AUv3InstanceBase::AllParameterListener *, std::__1::default_delete<AUv3InstanceBase::AllParameterListener>> {
        struct AllParameterListener *_field1;
    } _field1;
};

struct unique_ptr<AUv3InstanceBase::ClientPropertyListener, std::__1::default_delete<AUv3InstanceBase::ClientPropertyListener>>;

struct unique_ptr<AudioComponentPluginScanner, std::__1::default_delete<AudioComponentPluginScanner>> {
    struct __compressed_pair<AudioComponentPluginScanner *, std::__1::default_delete<AudioComponentPluginScanner>> {
        struct AudioComponentPluginScanner *_field1;
    } _field1;
};

struct unique_ptr<SemaphoreIOMessenger_Receiver, std::__1::default_delete<SemaphoreIOMessenger_Receiver>> {
    struct __compressed_pair<SemaphoreIOMessenger_Receiver *, std::__1::default_delete<SemaphoreIOMessenger_Receiver>> {
        struct SemaphoreIOMessenger_Receiver *_field1;
    } _field1;
};

struct unique_ptr<SemaphoreIOMessenger_Sender, std::__1::default_delete<SemaphoreIOMessenger_Sender>> {
    struct __compressed_pair<SemaphoreIOMessenger_Sender *, std::__1::default_delete<SemaphoreIOMessenger_Sender>> {
        struct SemaphoreIOMessenger_Sender *__value_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>*> **__value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unordered_map<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long), std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<const long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>>> {
    struct __hash_table<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::__1::hash<long>, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::__1::equal_to<long>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct vector<AUAudioUnit_XH_PropListener, std::__1::allocator<AUAudioUnit_XH_PropListener>> {
    struct AUAudioUnit_XH_PropListener *__begin_;
    struct AUAudioUnit_XH_PropListener *__end_;
    struct __compressed_pair<AUAudioUnit_XH_PropListener *, std::__1::allocator<AUAudioUnit_XH_PropListener>> {
        struct AUAudioUnit_XH_PropListener *__value_;
    } __end_cap_;
};

struct vector<AULocalParameterObserver *, std::__1::allocator<AULocalParameterObserver *>> {
    struct AULocalParameterObserver **_field1;
    struct AULocalParameterObserver **_field2;
    struct __compressed_pair<AULocalParameterObserver **, std::__1::allocator<AULocalParameterObserver *>> {
        struct AULocalParameterObserver **_field1;
    } _field3;
};

struct vector<AUv3InstanceBase::ScopeElementIDObj, std::__1::allocator<AUv3InstanceBase::ScopeElementIDObj>> {
    struct ScopeElementIDObj *_field1;
    struct ScopeElementIDObj *_field2;
    struct __compressed_pair<AUv3InstanceBase::ScopeElementIDObj *, std::__1::allocator<AUv3InstanceBase::ScopeElementIDObj>> {
        struct ScopeElementIDObj *_field1;
    } _field3;
};

struct vector<AUv3RenderAdapter::AUInputElement, std::__1::allocator<AUv3RenderAdapter::AUInputElement>> {
    struct AUInputElement *_field1;
    struct AUInputElement *_field2;
    struct __compressed_pair<AUv3RenderAdapter::AUInputElement *, std::__1::allocator<AUv3RenderAdapter::AUInputElement>> {
        struct AUInputElement *_field1;
    } _field3;
};

struct vector<AddressToParameter, std::__1::allocator<AddressToParameter>> {
    struct AddressToParameter *__begin_;
    struct AddressToParameter *__end_;
    struct __compressed_pair<AddressToParameter *, std::__1::allocator<AddressToParameter>> {
        struct AddressToParameter *__value_;
    } __end_cap_;
};

struct vector<BusPropertyObserver, std::__1::allocator<BusPropertyObserver>> {
    struct BusPropertyObserver *__begin_;
    struct BusPropertyObserver *__end_;
    struct __compressed_pair<BusPropertyObserver *, std::__1::allocator<BusPropertyObserver>> {
        struct BusPropertyObserver *__value_;
    } __end_cap_;
};

struct vector<IPCAUSharedMemoryBase::Element, std::__1::allocator<IPCAUSharedMemoryBase::Element>> {
    struct Element *__begin_;
    struct Element *__end_;
    struct __compressed_pair<IPCAUSharedMemoryBase::Element *, std::__1::allocator<IPCAUSharedMemoryBase::Element>> {
        struct Element *__value_;
    } __end_cap_;
};

struct vector<NSObject<OS_dispatch_semaphore>*, std::__1::allocator<NSObject<OS_dispatch_semaphore>*>> {
    id *__begin_;
    id *__end_;
    struct __compressed_pair<NSObject<OS_dispatch_semaphore>**, std::__1::allocator<NSObject<OS_dispatch_semaphore>*>> {
        id *__value_;
    } __end_cap_;
};

struct vector<NewServerListener, std::__1::allocator<NewServerListener>> {
    struct NewServerListener *__begin_;
    struct NewServerListener *__end_;
    struct __compressed_pair<NewServerListener *, std::__1::allocator<NewServerListener>> {
        struct NewServerListener *__value_;
    } __end_cap_;
};

struct vector<ParameterAutomationEvent, std::__1::allocator<ParameterAutomationEvent>> {
    struct ParameterAutomationEvent *_field1;
    struct ParameterAutomationEvent *_field2;
    struct __compressed_pair<ParameterAutomationEvent *, std::__1::allocator<ParameterAutomationEvent>> {
        struct ParameterAutomationEvent *_field1;
    } _field3;
};

struct vector<PropertyListener, std::__1::allocator<PropertyListener>> {
    struct PropertyListener *__begin_;
    struct PropertyListener *__end_;
    struct __compressed_pair<PropertyListener *, std::__1::allocator<PropertyListener>> {
        struct PropertyListener *__value_;
    } __end_cap_;
};

struct vector<std::__1::unique_ptr<AUv3InstanceBase::ClientPropertyListener, std::__1::default_delete<AUv3InstanceBase::ClientPropertyListener>>, std::__1::allocator<std::__1::unique_ptr<AUv3InstanceBase::ClientPropertyListener, std::__1::default_delete<AUv3InstanceBase::ClientPropertyListener>>>> {
    struct unique_ptr<AUv3InstanceBase::ClientPropertyListener, std::__1::default_delete<AUv3InstanceBase::ClientPropertyListener>> *_field1;
    struct unique_ptr<AUv3InstanceBase::ClientPropertyListener, std::__1::default_delete<AUv3InstanceBase::ClientPropertyListener>> *_field2;
    struct __compressed_pair<std::__1::unique_ptr<AUv3InstanceBase::ClientPropertyListener, std::__1::default_delete<AUv3InstanceBase::ClientPropertyListener>>*, std::__1::allocator<std::__1::unique_ptr<AUv3InstanceBase::ClientPropertyListener, std::__1::default_delete<AUv3InstanceBase::ClientPropertyListener>>>> {
        struct unique_ptr<AUv3InstanceBase::ClientPropertyListener, std::__1::default_delete<AUv3InstanceBase::ClientPropertyListener>> *_field1;
    } _field3;
};

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

// Template types
typedef struct vector<AddressToParameter, std::__1::allocator<AddressToParameter>> {
    struct AddressToParameter *__begin_;
    struct AddressToParameter *__end_;
    struct __compressed_pair<AddressToParameter *, std::__1::allocator<AddressToParameter>> {
        struct AddressToParameter *__value_;
    } __end_cap_;
} vector_66b3461a;

typedef struct vector<BusPropertyObserver, std::__1::allocator<BusPropertyObserver>> {
    struct BusPropertyObserver *__begin_;
    struct BusPropertyObserver *__end_;
    struct __compressed_pair<BusPropertyObserver *, std::__1::allocator<BusPropertyObserver>> {
        struct BusPropertyObserver *__value_;
    } __end_cap_;
} vector_e102d759;

union AURenderEvent;
