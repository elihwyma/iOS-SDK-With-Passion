/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface UIDropInteractionContextImpl : NSObject

{
    long long _state;
    NSArray *_items;
}

@property (nonatomic) long long state;
@property (retain, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

@end
