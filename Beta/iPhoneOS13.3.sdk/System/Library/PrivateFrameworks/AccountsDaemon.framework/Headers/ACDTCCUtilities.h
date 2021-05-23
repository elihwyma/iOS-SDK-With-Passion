/*
 Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <Foundation/NSObject.h>

@interface ACDTCCUtilities : NSObject

+ (struct __CFString *)_TCCServiceForAccountTypeID:(id)arg1;
+ (int)TCCStateForClient:(id)arg1 accountTypeID:(id)arg2;
+ (_Bool)TCCSupportedForAccountTypeID:(id)arg1;
+ (_Bool)setTCCStateForClient:(id)arg1 accountTypeID:(id)arg2 toGranted:(_Bool)arg3;
+ (_Bool)clearTCCStateForClient:(id)arg1 accountTypeID:(id)arg2;
+ (id)allTCCStatesForAccountTypeID:(id)arg1;
+ (_Bool)clearAllTCCStatesForAccountTypeID:(id)arg1;

@end
