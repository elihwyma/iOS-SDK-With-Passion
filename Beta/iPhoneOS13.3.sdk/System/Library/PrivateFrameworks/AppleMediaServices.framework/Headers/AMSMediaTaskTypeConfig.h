/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSMediaTaskTypeConfig : NSObject

{
    _Bool _includePlatform;
    NSString *_hostBagKey;
    long long _type;
    NSString *_typeString;
}

@property (nonatomic, readonly) NSString *hostBagKey;
@property (nonatomic, readonly) _Bool includePlatform;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSString *typeString;

+ (id)configForType:(long long)arg1;

- (id)initWithType:(long long)arg1 typeString:(id)arg2 hostBagKey:(id)arg3 includePlatform:(_Bool)arg4;

@end
