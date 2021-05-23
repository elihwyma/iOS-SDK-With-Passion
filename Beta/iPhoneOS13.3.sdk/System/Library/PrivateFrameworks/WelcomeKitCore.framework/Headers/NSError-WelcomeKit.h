/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

#import <Foundation/NSError.h>

@interface NSError (WelcomeKit)

+ (id)_wl_encodableDictionaryFromDictionary:(id)arg1;
+ (id)_wl_encodableArrayFromArray:(id)arg1;
+ (id)_wl_encodableSetFromSet:(id)arg1;
+ (_Bool)_wl_objectIsKindOfNonCollectionPlistClass:(id)arg1;
+ (id)_wl_encodableObjectFromObject:(id)arg1;
+ (id)wl_encodableErrorSupportedClasses;

- (id)wl_encodableError;
- (_Bool)wk_representsTransientConnectivityIssueForAttempt:(unsigned long long)arg1;

@end
