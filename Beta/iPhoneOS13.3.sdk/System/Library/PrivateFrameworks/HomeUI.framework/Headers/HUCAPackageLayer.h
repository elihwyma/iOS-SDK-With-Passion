/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class CALayer, NSSet, NSString;

@interface HUCAPackageLayer : NSObject

{
    NSString *_name;
    CALayer *_layer;
    NSSet *_tags;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) CALayer *layer;
@property (nonatomic, readonly) NSSet *tags;

+ (id)_allTags;
+ (id)_tagsForName:(id)arg1;

- (void)_applyPrimaryColorWithModifiers:(id)arg1;
- (id)initWithName:(id)arg1 layer:(id)arg2;
- (void)applyModifiers:(id)arg1;

@end
