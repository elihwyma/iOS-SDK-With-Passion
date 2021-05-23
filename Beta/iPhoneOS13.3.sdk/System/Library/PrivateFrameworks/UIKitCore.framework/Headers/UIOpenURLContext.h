/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSURL, UISceneOpenURLOptions;

@interface UIOpenURLContext : NSObject

{
    NSURL *_URL;
    UISceneOpenURLOptions *_options;
}

@property (copy, nonatomic, readonly) NSDictionary *optionsDictionary;
@property (copy, nonatomic, readonly) NSDictionary *URLOptionsDictionary;
@property (copy, nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) UISceneOpenURLOptions *options;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithURL:(id)arg1 options:(id)arg2;

@end
