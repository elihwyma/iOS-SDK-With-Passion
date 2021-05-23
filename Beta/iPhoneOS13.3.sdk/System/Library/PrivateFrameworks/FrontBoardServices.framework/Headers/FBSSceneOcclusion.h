/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

#import <FrontBoardServices/Swift-Protocol.h>

@class NSString;

@interface FBSSceneOcclusion : NSObject <Swift>

{
    struct CGRect _rect;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)occlusionWithRect:(struct CGRect)arg1;
+ (id)fullOcclusion;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (struct CGRect)CGRect;
- (id)_initWithCGRect:(struct CGRect)arg1;
- (_Bool)isEqualToOcclusion:(id)arg1;

@end
