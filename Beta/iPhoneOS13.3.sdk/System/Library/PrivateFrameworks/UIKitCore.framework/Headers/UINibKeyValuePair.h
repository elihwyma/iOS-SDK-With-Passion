/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface UINibKeyValuePair : NSObject

{
    id object;
    NSString *keyPath;
    id value;
}

@property (nonatomic, readonly) id object;
@property (copy, nonatomic, readonly) NSString *keyPath;
@property (nonatomic, readonly) id value;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)applyForSimulator;
- (void)apply;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 value:(id)arg3;

@end
