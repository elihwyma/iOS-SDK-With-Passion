/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIResponder;

__attribute__((visibility("hidden")))
@interface _UIResponder_Override_Host_Entry : NSObject

{
    UIResponder *_overridden;
    long long _type;
}

@property (weak, readonly) UIResponder *overridden;
@property (readonly) long long type;

+ (id)entryWithResponder:(id)arg1 forType:(long long)arg2;

- (unsigned long long)hash;
- (id)description;

@end
