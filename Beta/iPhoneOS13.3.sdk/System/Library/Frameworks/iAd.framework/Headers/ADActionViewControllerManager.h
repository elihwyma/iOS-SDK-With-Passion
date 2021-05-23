/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <NSObject.h>

@class NSMutableDictionary;

@interface ADActionViewControllerManager : NSObject

{
    NSMutableDictionary *_servingAdSpaces;
}

@property (retain, nonatomic) NSMutableDictionary *servingAdSpaces;

+ (id)sharedManager;

- (id)init;
- (void)actionViewController:(id)arg1 dismissForIdentifier:(id)arg2;
- (void)requestActionViewControllerForAdSpace:(id)arg1;
- (void)cancelRequestForActionViewControllerForAdSpace:(id)arg1;

@end
