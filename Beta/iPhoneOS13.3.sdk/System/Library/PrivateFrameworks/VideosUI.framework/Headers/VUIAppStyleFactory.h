/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VUIAppStyleFactory : NSObject

{
    long long _interfaceIdiom;
}

+ (id)sharedInstance;

- (id)init;
- (struct UIEdgeInsets)_cornerRadiusWithStyle:(long long)arg1;
- (void)setAppStylesForElement:(id)arg1;

@end
