/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSError.h>

@interface NSError (EventKit)

+ (id)errorWithEKErrorCode:(long long)arg1;
+ (id)errorWithCADResult:(int)arg1;
+ (id)errorWithEKErrorCode:(long long)arg1 description:(id)arg2;
+ (id)errorWithCADResult:(int)arg1 action:(id)arg2;
+ (id)_defaultDescriptionForCode:(long long)arg1;
+ (id)errorWithEKErrorCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3 reason:(id)arg4;
+ (id)errorWithEKErrorCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)errorWithEKErrorCode:(long long)arg1 description:(id)arg2 reason:(id)arg3;

@end
