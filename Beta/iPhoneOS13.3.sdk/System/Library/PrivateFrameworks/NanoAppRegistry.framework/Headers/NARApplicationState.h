/*
 Image: /System/Library/PrivateFrameworks/NanoAppRegistry.framework/NanoAppRegistry
 */

#import <Foundation/NSObject.h>

@interface NARApplicationState : NSObject

{
    _Bool _restricted;
    _Bool _removedSystemApp;
}

@property (nonatomic, readonly, getter=isRestricted) _Bool restricted;
@property (nonatomic, readonly, getter=isRemovedSystemApp) _Bool removedSystemApp;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRestricted:(_Bool)arg1 removedSystemApp:(_Bool)arg2;

@end
