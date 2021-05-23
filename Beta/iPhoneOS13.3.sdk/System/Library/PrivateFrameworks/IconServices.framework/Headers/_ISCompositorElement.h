/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@protocol ISCompositorRecipe, ISCompositorResourceProvider;

__attribute__((visibility("hidden")))
@interface _ISCompositorElement : NSObject

{
    id <ISCompositorRecipe> _recipe;
    NSMutableDictionary *_resourceByName;
}

@property (retain) id <ISCompositorRecipe> recipe;
@property (readonly) NSMutableDictionary *resourceByName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) id <ISCompositorResourceProvider> resourceProvider;

- (id)init;
- (void)clearResources;
- (id)initWithRecipe:(id)arg1 resources:(id)arg2;
- (id)resourceNamed:(id)arg1;
- (void)setResource:(id)arg1 forName:(id)arg2;
- (void)addResourcesFromDictionary:(id)arg1;

@end
