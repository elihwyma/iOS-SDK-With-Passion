/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface JTSuspendedInteractionRequest : NSObject

{
    NSString *_tag;
    NSArray *_excludedChildViewControllers;
}

@property (retain, nonatomic) NSString *tag;
@property (retain, nonatomic) NSArray *excludedChildViewControllers;

+ (id)requestWithTag:(id)arg1 excludedViewControllers:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
