/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/_LSDService.h>

__attribute__((visibility("hidden")))
@interface _LSDModifyService : _LSDService

+ (_Bool)isEnabled;
+ (unsigned short)connectionType;
+ (Class)clientClass;
+ (id)XPCInterface;
+ (id)dispatchQueue;

@end
