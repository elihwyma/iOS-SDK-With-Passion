/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@interface CNTCCServices : NSObject

+ (id)defaultServices;

- (_Bool)TCCAccessCheckAuditToken:(CDStruct_6ad76789)arg1:(struct __CFString *)arg2:(const struct __CFDictionary *)arg3;
- (int)TCCAccessPreflight:(struct __CFString *)arg1:(const struct __CFDictionary *)arg2;

@end
