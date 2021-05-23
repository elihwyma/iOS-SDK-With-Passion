/*
 Image: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE
 */

@class NSObject;

typedef void (^CDUnknownBlockType)(void);

struct Allocator;

struct AudioBuffer {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
};

struct AudioBufferList {
    unsigned int _field1;
    struct AudioBuffer _field2[1];
};

struct AudioComponentDescription {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
};

struct AudioManager_AVAudioEngine {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
    struct unordered_map<unsigned long long, std::__1::unordered_map<unsigned long long, re::AudioMixGroupState, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, re::AudioMixGroupState>>>, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::unordered_map<unsigned long long, re::AudioMixGroupState, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, re::AudioMixGroupState>>>>>> _field3;
    struct unordered_map<unsigned long long, std::__1::unordered_map<unsigned long long, float, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, float>>>, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::unordered_map<unsigned long long, float, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, float>>>>>> _field4;
    struct unordered_map<unsigned long long, long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, long long>>> _field5;
    id _field6;
    struct unordered_map<unsigned long long, re::AVAEAudioScene, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, re::AVAEAudioScene>>> _field7;
    id _field8;
    id _field9;
    double _field10;
    unsigned int _field11;
    struct atomic<bool> _field12;
    struct atomic<int> _field13;
    struct AudioUnitPool _field14;
};

struct AudioUnitPool {
    struct unordered_map<const void *, std::__1::unique_ptr<AudioUnitPool::Instantiator, std::__1::default_delete<AudioUnitPool::Instantiator>>, std::__1::hash<const void *>, std::__1::equal_to<const void *>, std::__1::allocator<std::__1::pair<const void *const, std::__1::unique_ptr<AudioUnitPool::Instantiator, std::__1::default_delete<AudioUnitPool::Instantiator>>>>> _field1;
};

struct Config {
    struct ServiceLocator *serviceLocator;
    NSObject *dispatchQueue;
    struct DynamicString serviceID;
};

struct DiscoveryInvite;

struct DiscoveryView {
    CDUnknownFunctionPointerType *_field1;
    struct atomic<int> _field2;
    struct SharedPtr<re::internal::WeakCount> _field3;
    struct Allocator *_field4;
};

struct DynamicArray<re::Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity>>::Subscription> {
    struct Allocator *_field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned int _field4;
    struct Subscription *_field5;
};

struct DynamicArray<re::Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity>>::SubscriptionLegacy> {
    struct Allocator *_field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned int _field4;
    struct SubscriptionLegacy *_field5;
};

struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>>::Subscription> {
    struct Allocator *m_allocator;
    unsigned long long m_capacity;
    unsigned long long m_size;
    unsigned int m_version;
    struct Subscription *m_data;
};

struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>>::SubscriptionLegacy> {
    struct Allocator *m_allocator;
    unsigned long long m_capacity;
    unsigned long long m_size;
    unsigned int m_version;
    struct SubscriptionLegacy *m_data;
};

struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>>::Subscription> {
    struct Allocator *m_allocator;
    unsigned long long m_capacity;
    unsigned long long m_size;
    unsigned int m_version;
    struct Subscription *m_data;
};

struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>>::SubscriptionLegacy> {
    struct Allocator *m_allocator;
    unsigned long long m_capacity;
    unsigned long long m_size;
    unsigned int m_version;
    struct SubscriptionLegacy *m_data;
};

struct DynamicArray<re::IDSDiscoveryView *> {
    struct Allocator *m_allocator;
    unsigned long long m_capacity;
    unsigned long long m_size;
    unsigned int m_version;
    struct IDSDiscoveryView **m_data;
};

struct DynamicArray<re::IDSInvite *> {
    struct Allocator *m_allocator;
    unsigned long long m_capacity;
    unsigned long long m_size;
    unsigned int m_version;
    struct IDSInvite **m_data;
};

struct DynamicArray<re::SharedPtr<re::DiscoveryIdentity>> {
    struct Allocator *_field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned int _field4;
    struct SharedPtr<re::DiscoveryIdentity> *_field5;
};

struct DynamicString {
    struct Allocator *m_allocator;
    char *m_buffer;
    unsigned long long m_capacity;
    unsigned long long m_length;
};

struct Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity>> {
    struct DynamicArray<re::Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity>>::Subscription> _field1;
    struct DynamicArray<re::Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity>>::SubscriptionLegacy> _field2;
};

struct Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>> {
    struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>>::Subscription> m_subscriptions;
    struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>>::SubscriptionLegacy> m_subscriptionsLegacy;
};

struct Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>> {
    struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>>::Subscription> m_subscriptions;
    struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>>::SubscriptionLegacy> m_subscriptionsLegacy;
};

struct IDSDiscoveryIdentity;

struct IDSDiscoveryView {
    CDUnknownFunctionPointerType *_field1;
    struct atomic<int> _field2;
    struct SharedPtr<re::internal::WeakCount> _field3;
    struct Allocator *_field4;
    struct WeakPtr<re::IDSManager> _field5;
    struct Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity>> _field6;
    struct Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity>> _field7;
    struct DynamicArray<re::SharedPtr<re::DiscoveryIdentity>> _field8;
    struct DynamicString _field9;
};

struct IDSInvite {
    CDUnknownFunctionPointerType *_field1;
    struct atomic<int> _field2;
    struct SharedPtr<re::internal::WeakCount> _field3;
    struct Allocator *_field4;
    struct WeakPtr<re::IDSManager> _field5;
    struct DynamicString _field6;
    SharedPtr_601ce9e9 _field7;
    SharedPtr_c2d37bbb _field8;
};

struct IDSSessionService {
    CDUnknownFunctionPointerType *_field1;
};

struct ServiceLocator;

struct SharedPtr<re::DiscoveryIdentity>;

struct SharedPtr<re::DiscoveryInvite> {
    struct DiscoveryInvite *_field1;
};

struct SharedPtr<re::DiscoveryView> {
    struct DiscoveryView *_field1;
};

struct SharedPtr<re::IDSDiscoveryIdentity> {
    struct IDSDiscoveryIdentity *_field1;
};

struct SharedPtr<re::IDSDiscoveryView> {
    struct IDSDiscoveryView *_field1;
};

struct SharedPtr<re::internal::WeakCount> {
    struct WeakCount *_field1;
};

struct Slice<re::DynamicString> {
    struct DynamicString *_field1;
    unsigned long long _field2;
};

struct StreamWriter;

struct Subscription;

struct SubscriptionLegacy;

struct WeakCount;

struct WeakPtr<re::IDSManager> {
    struct SharedPtr<re::internal::WeakCount> _field1;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const void *, std::__1::unique_ptr<AudioUnitPool::Instantiator, std::__1::default_delete<AudioUnitPool::Instantiator>>>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const void *, std::__1::unique_ptr<AudioUnitPool::Instantiator, std::__1::default_delete<AudioUnitPool::Instantiator>>>, void *>*> *_field1;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, long long>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, long long>, void *>*> *_field1;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, re::AVAEAudioScene>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, re::AVAEAudioScene>, void *>*> *_field1;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unordered_map<unsigned long long, float, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, float>>>>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unordered_map<unsigned long long, float, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, float>>>>, void *>*> *_field1;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unordered_map<unsigned long long, re::AudioMixGroupState, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, re::AudioMixGroupState>>>>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unordered_map<unsigned long long, re::AudioMixGroupState, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, re::AudioMixGroupState>>>>, void *>*> *_field1;
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct atomic<bool> {
    _Atomic _Bool __a_;
};

struct atomic<float> {
    _Atomic float __a_;
};

struct atomic<int> {
    _Atomic int __a_;
};

struct mutex {
    struct _opaque_pthread_mutex_t __m_;
};

struct queue<GainRampCommand>;

struct recursive_mutex {
    struct _opaque_pthread_mutex_t __m_;
};

struct shared_ptr<AudioStreamRecordingManager::StreamWriter> {
    struct StreamWriter *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct unique_ptr<boost::lockfree::queue<GainRampCommand>, std::__1::default_delete<boost::lockfree::queue<GainRampCommand>>> {
    struct __compressed_pair<boost::lockfree::queue<GainRampCommand>*, std::__1::default_delete<boost::lockfree::queue<GainRampCommand>>> {
        struct queue<GainRampCommand> *__value_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const void *, std::__1::unique_ptr<AudioUnitPool::Instantiator, std::__1::default_delete<AudioUnitPool::Instantiator>>>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const void *, std::__1::unique_ptr<AudioUnitPool::Instantiator, std::__1::default_delete<AudioUnitPool::Instantiator>>>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const void *, std::__1::unique_ptr<AudioUnitPool::Instantiator, std::__1::default_delete<AudioUnitPool::Instantiator>>>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const void *, std::__1::unique_ptr<AudioUnitPool::Instantiator, std::__1::default_delete<AudioUnitPool::Instantiator>>>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const void *, std::__1::unique_ptr<AudioUnitPool::Instantiator, std::__1::default_delete<AudioUnitPool::Instantiator>>>, void *>*> **_field1;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const void *, std::__1::unique_ptr<AudioUnitPool::Instantiator, std::__1::default_delete<AudioUnitPool::Instantiator>>>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const void *, std::__1::unique_ptr<AudioUnitPool::Instantiator, std::__1::default_delete<AudioUnitPool::Instantiator>>>, void *>*>*>> {
                unsigned long long _field1;
            } _field1;
        } _field2;
    } _field1;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, long long>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, long long>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, long long>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, long long>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, long long>, void *>*> **_field1;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, long long>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, long long>, void *>*>*>> {
                unsigned long long _field1;
            } _field1;
        } _field2;
    } _field1;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, re::AVAEAudioScene>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, re::AVAEAudioScene>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, re::AVAEAudioScene>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, re::AVAEAudioScene>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, re::AVAEAudioScene>, void *>*> **_field1;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, re::AVAEAudioScene>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, re::AVAEAudioScene>, void *>*>*>> {
                unsigned long long _field1;
            } _field1;
        } _field2;
    } _field1;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unordered_map<unsigned long long, float, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, float>>>>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unordered_map<unsigned long long, float, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, float>>>>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unordered_map<unsigned long long, float, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, float>>>>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unordered_map<unsigned long long, float, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, float>>>>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unordered_map<unsigned long long, float, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, float>>>>, void *>*> **_field1;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unordered_map<unsigned long long, float, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, float>>>>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unordered_map<unsigned long long, float, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, float>>>>, void *>*>*>> {
                unsigned long long _field1;
            } _field1;
        } _field2;
    } _field1;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unordered_map<unsigned long long, re::AudioMixGroupState, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, re::AudioMixGroupState>>>>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unordered_map<unsigned long long, re::AudioMixGroupState, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, re::AudioMixGroupState>>>>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unordered_map<unsigned long long, re::AudioMixGroupState, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, re::AudioMixGroupState>>>>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unordered_map<unsigned long long, re::AudioMixGroupState, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, re::AudioMixGroupState>>>>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unordered_map<unsigned long long, re::AudioMixGroupState, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, re::AudioMixGroupState>>>>, void *>*> **_field1;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unordered_map<unsigned long long, re::AudioMixGroupState, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, re::AudioMixGroupState>>>>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unordered_map<unsigned long long, re::AudioMixGroupState, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, re::AudioMixGroupState>>>>, void *>*>*>> {
                unsigned long long _field1;
            } _field1;
        } _field2;
    } _field1;
};

struct unordered_map<const void *, std::__1::unique_ptr<AudioUnitPool::Instantiator, std::__1::default_delete<AudioUnitPool::Instantiator>>, std::__1::hash<const void *>, std::__1::equal_to<const void *>, std::__1::allocator<std::__1::pair<const void *const, std::__1::unique_ptr<AudioUnitPool::Instantiator, std::__1::default_delete<AudioUnitPool::Instantiator>>>>> {
    struct __hash_table<std::__1::__hash_value_type<const void *, std::__1::unique_ptr<AudioUnitPool::Instantiator, std::__1::default_delete<AudioUnitPool::Instantiator>>>, std::__1::__unordered_map_hasher<const void *, std::__1::__hash_value_type<const void *, std::__1::unique_ptr<AudioUnitPool::Instantiator, std::__1::default_delete<AudioUnitPool::Instantiator>>>, std::__1::hash<const void *>, true>, std::__1::__unordered_map_equal<const void *, std::__1::__hash_value_type<const void *, std::__1::unique_ptr<AudioUnitPool::Instantiator, std::__1::default_delete<AudioUnitPool::Instantiator>>>, std::__1::equal_to<const void *>, true>, std::__1::allocator<std::__1::__hash_value_type<const void *, std::__1::unique_ptr<AudioUnitPool::Instantiator, std::__1::default_delete<AudioUnitPool::Instantiator>>>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const void *, std::__1::unique_ptr<AudioUnitPool::Instantiator, std::__1::default_delete<AudioUnitPool::Instantiator>>>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const void *, std::__1::unique_ptr<AudioUnitPool::Instantiator, std::__1::default_delete<AudioUnitPool::Instantiator>>>, void *>*>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const void *, std::__1::unique_ptr<AudioUnitPool::Instantiator, std::__1::default_delete<AudioUnitPool::Instantiator>>>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const void *, std::__1::unique_ptr<AudioUnitPool::Instantiator, std::__1::default_delete<AudioUnitPool::Instantiator>>>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const void *, std::__1::unique_ptr<AudioUnitPool::Instantiator, std::__1::default_delete<AudioUnitPool::Instantiator>>>, void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<const void *, std::__1::__hash_value_type<const void *, std::__1::unique_ptr<AudioUnitPool::Instantiator, std::__1::default_delete<AudioUnitPool::Instantiator>>>, std::__1::hash<const void *>, true>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<const void *, std::__1::__hash_value_type<const void *, std::__1::unique_ptr<AudioUnitPool::Instantiator, std::__1::default_delete<AudioUnitPool::Instantiator>>>, std::__1::equal_to<const void *>, true>> {
            float _field1;
        } _field4;
    } _field1;
};

struct unordered_map<unsigned long long, long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, long long>>> {
    struct __hash_table<std::__1::__hash_value_type<unsigned long long, long long>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, long long>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, long long>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, long long>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, long long>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, long long>, void *>*>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, long long>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, long long>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, long long>, void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, long long>, std::__1::hash<unsigned long long>, true>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, long long>, std::__1::equal_to<unsigned long long>, true>> {
            float _field1;
        } _field4;
    } _field1;
};

struct unordered_map<unsigned long long, re::AVAEAudioScene, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, re::AVAEAudioScene>>> {
    struct __hash_table<std::__1::__hash_value_type<unsigned long long, re::AVAEAudioScene>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, re::AVAEAudioScene>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, re::AVAEAudioScene>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, re::AVAEAudioScene>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, re::AVAEAudioScene>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, re::AVAEAudioScene>, void *>*>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, re::AVAEAudioScene>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, re::AVAEAudioScene>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, re::AVAEAudioScene>, void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, re::AVAEAudioScene>, std::__1::hash<unsigned long long>, true>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, re::AVAEAudioScene>, std::__1::equal_to<unsigned long long>, true>> {
            float _field1;
        } _field4;
    } _field1;
};

struct unordered_map<unsigned long long, std::__1::unordered_map<unsigned long long, float, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, float>>>, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::unordered_map<unsigned long long, float, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, float>>>>>> {
    struct __hash_table<std::__1::__hash_value_type<unsigned long long, std::__1::unordered_map<unsigned long long, float, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, float>>>>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unordered_map<unsigned long long, float, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, float>>>>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unordered_map<unsigned long long, float, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, float>>>>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, std::__1::unordered_map<unsigned long long, float, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, float>>>>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unordered_map<unsigned long long, float, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, float>>>>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unordered_map<unsigned long long, float, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, float>>>>, void *>*>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unordered_map<unsigned long long, float, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, float>>>>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unordered_map<unsigned long long, float, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, float>>>>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unordered_map<unsigned long long, float, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, float>>>>, void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unordered_map<unsigned long long, float, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, float>>>>, std::__1::hash<unsigned long long>, true>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unordered_map<unsigned long long, float, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, float>>>>, std::__1::equal_to<unsigned long long>, true>> {
            float _field1;
        } _field4;
    } _field1;
};

struct unordered_map<unsigned long long, std::__1::unordered_map<unsigned long long, re::AudioMixGroupState, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, re::AudioMixGroupState>>>, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::unordered_map<unsigned long long, re::AudioMixGroupState, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, re::AudioMixGroupState>>>>>> {
    struct __hash_table<std::__1::__hash_value_type<unsigned long long, std::__1::unordered_map<unsigned long long, re::AudioMixGroupState, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, re::AudioMixGroupState>>>>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unordered_map<unsigned long long, re::AudioMixGroupState, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, re::AudioMixGroupState>>>>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unordered_map<unsigned long long, re::AudioMixGroupState, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, re::AudioMixGroupState>>>>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, std::__1::unordered_map<unsigned long long, re::AudioMixGroupState, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, re::AudioMixGroupState>>>>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unordered_map<unsigned long long, re::AudioMixGroupState, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, re::AudioMixGroupState>>>>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unordered_map<unsigned long long, re::AudioMixGroupState, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, re::AudioMixGroupState>>>>, void *>*>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unordered_map<unsigned long long, re::AudioMixGroupState, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, re::AudioMixGroupState>>>>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unordered_map<unsigned long long, re::AudioMixGroupState, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, re::AudioMixGroupState>>>>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unordered_map<unsigned long long, re::AudioMixGroupState, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, re::AudioMixGroupState>>>>, void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unordered_map<unsigned long long, re::AudioMixGroupState, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, re::AudioMixGroupState>>>>, std::__1::hash<unsigned long long>, true>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unordered_map<unsigned long long, re::AudioMixGroupState, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, re::AudioMixGroupState>>>>, std::__1::equal_to<unsigned long long>, true>> {
            float _field1;
        } _field4;
    } _field1;
};

// Template types
typedef struct Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>> {
    struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>>::Subscription> m_subscriptions;
    struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>>::SubscriptionLegacy> m_subscriptionsLegacy;
} Event_8f7d30d6;

typedef struct Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>> {
    struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>>::Subscription> m_subscriptions;
    struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>>::SubscriptionLegacy> m_subscriptionsLegacy;
} Event_b92446be;

typedef struct SharedPtr<re::DiscoveryInvite> {
    struct DiscoveryInvite *_field1;
} SharedPtr_d68dfbcb;

typedef struct SharedPtr<re::DiscoveryView> {
    struct DiscoveryView *_field1;
} SharedPtr_c2d37bbb;

typedef struct SharedPtr<re::IDSDiscoveryIdentity> {
    struct IDSDiscoveryIdentity *_field1;
} SharedPtr_601ce9e9;

typedef struct SharedPtr<re::IDSDiscoveryView> {
    struct IDSDiscoveryView *_field1;
} SharedPtr_24b37889;

typedef struct Slice<re::DynamicString> {
    struct DynamicString *_field1;
    unsigned long long _field2;
} Slice_554aef03;
