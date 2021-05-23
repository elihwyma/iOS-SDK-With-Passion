/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _LSEnumeratedBundleInfo : NSObject

{
    _Bool _isPlaceholder;
    NSString *_bundleID;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) _Bool isPlaceholder;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBundleID:(id)arg1 isPlaceholder:(_Bool)arg2;

@end
