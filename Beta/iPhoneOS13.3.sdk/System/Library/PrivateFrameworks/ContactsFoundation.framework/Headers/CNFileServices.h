/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CNFileServices : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (int)statfs:(const char *)arg1:(struct statfs *)arg2;
- (int)errnoValue;
- (void *)dlopen:(const char *)arg1:(int)arg2;
- (void *)dlsym:(void *)arg1:(const char *)arg2;
- (int)dlclose:(void *)arg1;
- (int)open:(const char *)arg1:(int)arg2:(unsigned short)arg3;
- (int)close:(int)arg1;
- (int)fstatfs:(int)arg1:(struct statfs *)arg2;
- (int)flock:(int)arg1:(int)arg2;
- (int)fcntl_flock:(int)arg1:(int)arg2:(struct flock *)arg3;
- (id)NSTemporaryDirectory;

@end
