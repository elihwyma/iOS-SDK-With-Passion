/*
 Image: /System/Library/Frameworks/LocalAuthentication.framework/Support/DaemonUtils.framework/DaemonUtils
 */

#import <Foundation/NSObject.h>

@class Caller, LASecureData, NSData, NSDate, NSDictionary, NSMutableDictionary;

@interface Request : NSObject

{
    NSMutableDictionary *_cachedValues;
    _Bool _readOnly;
    _Bool _interactive;
    unsigned long long _id;
    Caller *_caller;
    NSDate *_received;
    long long _type;
    long long _policy;
    NSData *_acl;
    id _aclOperation;
    NSDictionary *_options;
    long long _credentialType;
    LASecureData *_credentialData;
    long long _purpose;
}

@property (nonatomic, readonly) unsigned long long id;
@property (nonatomic, readonly) Caller *caller;
@property (nonatomic, readonly) NSDate *received;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) long long policy;
@property (nonatomic, readonly) NSData *acl;
@property (nonatomic, readonly) id aclOperation;
@property (nonatomic, readonly) NSDictionary *options;
@property (nonatomic, readonly) long long credentialType;
@property (nonatomic, readonly) LASecureData *credentialData;
@property (nonatomic, readonly) _Bool readOnly;
@property (nonatomic, readonly) _Bool interactive;
@property (nonatomic, readonly) long long purpose;

+ (id)current;
+ (id)requestFromCurrentConnection;
+ (id)requestFromConnection:(id)arg1 event:(id)arg2;

- (id)cachedValue:(long long)arg1 object:(id)arg2 error:(id *)arg3 readValueBlock:(CDUnknownBlockType)arg4;
- (id)initWithCaller:(id)arg1;
- (void)_setupOptions:(id)arg1;
- (id)_complexIdentifier:(long long)arg1 object:(id)arg2;
- (void)_invalidateCachedValue:(id)arg1 identifier:(id)arg2;
- (void)setupForEvaluatePolicy:(long long)arg1 options:(id)arg2;
- (void)setupForEvaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3;
- (void)setupForCredential:(long long)arg1 value:(id)arg2 readOnly:(_Bool)arg3;
- (id)cachedValue:(long long)arg1 error:(id *)arg2 readValueBlock:(CDUnknownBlockType)arg3;

@end
