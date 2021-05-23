/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class NSBundle, NSString;

@interface BSPluginBundle : NSObject

{
    NSString *_identifier;
    NSBundle *_bundle;
    NSString *_name;
    NSString *_type;
    NSString *_specifiedClassName;
    NSString *_requiredClassOrProtocolName;
    Class _principalClass;
}

@property (nonatomic, readonly) NSBundle *bundle;
@property (copy, nonatomic) NSString *specifiedClassName;
@property (copy, nonatomic) NSString *requiredClassOrProtocolName;
@property (nonatomic, readonly, getter=isValid) _Bool valid;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *type;
@property (nonatomic, readonly, getter=isLoaded) _Bool loaded;
@property (nonatomic, readonly) Class principalClass;

+ (id)bundleWithPath:(id)arg1 availableSpecifications:(id)arg2;

- (id)description;
- (id)initWithBundle:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (_Bool)loadPlugin:(CDUnknownBlockType)arg1;
- (_Bool)loadPlugin;

@end
