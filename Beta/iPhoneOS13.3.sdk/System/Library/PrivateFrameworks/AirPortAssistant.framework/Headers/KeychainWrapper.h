/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <Foundation/NSObject.h>

@class NSLock, NSString;

@interface KeychainWrapper : NSObject

{
    NSString *_accountName;
    NSString *_serviceName;
    NSLock *_lock;
}

@property (copy, nonatomic) NSString *accountName;
@property (copy, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSLock *lock;

+ (id)keychainWrapperWithMACAddress:(id)arg1;
+ (id)keychainPasswordForMACAddress:(id)arg1;
+ (void)removeKeychainPasswordForMACAddress:(id)arg1;

- (void)dealloc;
- (id)genericPasswordQuery;
- (int)addGenericPassword:(id)arg1 withLabel:(id)arg2 andDescription:(id)arg3;
- (void)removeGenericPassword;
- (id)initWithAccountName:(id)arg1 serviceName:(id)arg2;
- (id)genericPassword;
- (id)getPasswordFromQuery:(id)arg1;
- (id)getGenericPassword;

@end
