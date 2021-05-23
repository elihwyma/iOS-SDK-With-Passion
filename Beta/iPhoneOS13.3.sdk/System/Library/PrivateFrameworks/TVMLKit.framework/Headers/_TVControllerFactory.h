/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _TVControllerFactory : NSObject

- (id)init;
- (void)_registerControllerCreators;
- (id)_shelfControllerForElement:(id)arg1 existingController:(id)arg2;
- (id)_gridControllerForElement:(id)arg1 existingController:(id)arg2;
- (id)_listControllerForElement:(id)arg1 existingController:(id)arg2;
- (id)_textFieldControllerForElement:(id)arg1 existingController:(id)arg2;
- (id)_carouselControllerForElement:(id)arg1 layout:(id)arg2 existingController:(id)arg3;

@end
