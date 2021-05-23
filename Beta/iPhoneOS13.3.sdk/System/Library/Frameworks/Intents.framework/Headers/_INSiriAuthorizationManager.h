/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _INSiriAuthorizationManager : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_siriEnabled;
+ (long long)_siriAuthorizationStatusForAppID:(id)arg1;
+ (void)_requestSiriAuthorization:(CDUnknownBlockType)arg1 auditToken:(CDStruct_6ad76789)arg2;
+ (_Bool)_isSiriAuthorizationRestricted;
+ (long long)_rawSiriAuthorizationStatusForAppID:(id)arg1;
+ (id)_tccAccessInfoForBundle:(id)arg1;

@end
