/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface VUIDocumentUIConfiguration : NSObject

{
    _Bool _animated;
    _Bool _navigationBarHidden;
    _Bool _navigationBarAdjustedToSizeClass;
    long long _type;
    NSString *_viewControllerIdentifier;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *viewControllerIdentifier;
@property (nonatomic, getter=isAnimated) _Bool animated;
@property (nonatomic, getter=isNavigationBarHidden) _Bool navigationBarHidden;
@property (nonatomic, getter=isNavigationBarAdjustedToSizeClass) _Bool navigationBarAdjustedToSizeClass;

+ (id)uiConfigurationWithDict:(id)arg1;
+ (long long)_presentationTypeFromString:(id)arg1;
+ (struct CGSize)_preferredSizeFromConfig:(id)arg1;

@end
