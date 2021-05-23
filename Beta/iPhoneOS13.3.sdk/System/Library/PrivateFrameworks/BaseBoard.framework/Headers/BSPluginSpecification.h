/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface BSPluginSpecification : NSObject

{
    NSString *_type;
    NSArray *_whitelistedNames;
    NSString *_classOrProtocolName;
}

@property (nonatomic, readonly, getter=isValid) _Bool valid;
@property (copy, nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSString *requiredClassOrProtocolName;

+ (id)specificationsFromHostBundle:(id)arg1;

- (id)description;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (_Bool)matchesPluginBundle:(id)arg1;
- (id)initWithPlistSpecification:(id)arg1;

@end
