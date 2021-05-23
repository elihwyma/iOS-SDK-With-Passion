/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

@class NSOrderedSet, NSSet, NSString;

@interface FBOcclusionsStackEntry : NSObject

{
    NSString *_key;
    double _level;
    NSSet *_occlusions;
    NSOrderedSet *_orderedOcclusions;
}

@property (copy, nonatomic, readonly) NSString *key;
@property (nonatomic) double level;
@property (copy, nonatomic) NSSet *occlusions;
@property (copy, nonatomic, readonly) NSOrderedSet *orderedOcclusions;

- (id)description;
- (id)initWithKey:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;

@end
