/*
 Image: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface UMLog : NSObject

{
    unsigned long long _type;
}

@property (nonatomic) unsigned long long type;

+ (id)error;
+ (id)info;
+ (id)debug;
+ (id)fault;
+ (id)standard;

- (void)logPublicFormat:(id)arg1;
- (void)logPrivateFormat:(id)arg1;
- (void)logMessage:(id)arg1;

@end
