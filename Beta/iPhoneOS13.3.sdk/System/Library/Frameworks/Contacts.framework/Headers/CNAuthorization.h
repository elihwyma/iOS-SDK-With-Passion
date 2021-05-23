/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNAuthorization : NSObject

+ (_Bool)requestAccessForEntityType:(long long)arg1;
+ (void)requestAccessForEntityType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (_Bool)requestAccessForEntityType:(long long)arg1 error:(id *)arg2;
+ (long long)authorizationStatusForEntityType:(long long)arg1;
+ (_Bool)isAccessRestrictedForEntityType:(long long)arg1;
+ (_Bool)requestAccessForEntityType:(long long)arg1 timeout:(double)arg2 error:(id *)arg3;

@end
