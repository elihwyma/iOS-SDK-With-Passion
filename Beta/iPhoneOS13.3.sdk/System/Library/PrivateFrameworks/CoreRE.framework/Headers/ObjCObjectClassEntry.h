/*
 Image: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface ObjCObjectClassEntry : NSObject

{
    NSString *_clsName;
    NSMutableSet *_objects;
}

@property (readonly) NSString *clsName;
@property (readonly) NSSet *objects;

- (void)addObject:(id)arg1;
- (id)initWithClass:(Class)arg1;

@end
