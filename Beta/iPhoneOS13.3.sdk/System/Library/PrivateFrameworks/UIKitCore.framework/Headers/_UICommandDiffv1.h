/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSOrderedSet;

__attribute__((visibility("hidden")))
@interface _UICommandDiffv1 : NSObject <Swift>

{
    NSOrderedSet *_changes;
}

@property (nonatomic, readonly) NSOrderedSet *changes;

+ (_Bool)supportsSecureCoding;
+ (id)diffWithChanges:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithChanges:(id)arg1;

@end
