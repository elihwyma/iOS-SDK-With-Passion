/*
 Image: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface APSMultiUserFS : NSObject

{
    NSString *_systemPathCache;
    _Bool _isMultiUser;
}

@property (readonly) _Bool isMultiUser;

+ (id)sharedInstance;

- (id)systemPath;
- (id)initWithIsMultiUserMode:(_Bool)arg1;

@end
