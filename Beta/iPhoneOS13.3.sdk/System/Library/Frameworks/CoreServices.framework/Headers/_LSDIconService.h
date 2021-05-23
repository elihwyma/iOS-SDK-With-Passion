/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/_LSDService.h>

__attribute__((visibility("hidden")))
@interface _LSDIconService : _LSDService

+ (unsigned short)connectionType;
+ (Class)clientClass;
+ (id)XPCInterface;

@end
