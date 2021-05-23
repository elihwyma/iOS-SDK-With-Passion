/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UISheetPresentationControllerConfiguration : NSObject <Swift>

{
    _Bool __wantsFullScreen;
    long long __mode;
}

@property (nonatomic, setter=_setWantsFullScreen:) _Bool _wantsFullScreen;
@property (nonatomic, setter=_setMode:) long long _mode;

+ (_Bool)supportsSecureCoding;
+ (id)_fullScreenConfiguration;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
