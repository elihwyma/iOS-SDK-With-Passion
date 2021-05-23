/*
 Image: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, _SWCGeneration, _SWCServiceSpecifier;

@interface _SWCServiceSettings : NSObject

{
    NSMutableDictionary *_dict;
    unsigned int _hasChanges:1;
    _SWCServiceSpecifier *_serviceSpecifier;
    _SWCGeneration *_generation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) _SWCGeneration *generation;
@property (readonly) _SWCServiceSpecifier *serviceSpecifier;
@property (readonly) _Bool hasChanges;

+ (_Bool)supportsSecureCoding;
+ (id)_log;
+ (id)serviceSettingsWithServiceSpecifier:(id)arg1 error:(id *)arg2;
+ (_Bool)removeObjectsForKeys:(id)arg1 serviceSpecifier:(id)arg2 error:(id *)arg3;
+ (_Bool)removeObjectsForKeys:(id)arg1 serviceType:(id)arg2 error:(id *)arg3;
+ (id)notificationCenter;
+ (void)serviceSettingsDidChange:(id)arg1;
+ (void)postChangeNotificationForServiceSpecifier:(id)arg1;

- (id)redactedDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (_Bool)commitReturningError:(id *)arg1;
- (id)objectForKey:(id)arg1 ofClass:(Class)arg2;
- (id)objectForKey:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3;
- (id)_initWithServiceSpecifier:(id)arg1 dictionary:(id)arg2 generation:(id)arg3;

@end
