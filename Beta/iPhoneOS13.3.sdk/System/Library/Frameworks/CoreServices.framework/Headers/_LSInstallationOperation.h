/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _LSInstallationOperation : NSObject

{
    NSString *_bundleID;
    long long _installType;
    CDUnknownBlockType _block;
    _Bool _claimed;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) long long installType;
@property (nonatomic, readonly) CDUnknownBlockType block;
@property (nonatomic) _Bool claimed;

- (id)description;
- (id)redactedDescription;
- (id)initWithBundleID:(id)arg1 installType:(long long)arg2 block:(CDUnknownBlockType)arg3;

@end
