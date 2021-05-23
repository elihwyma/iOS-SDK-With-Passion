/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

#import <FrontBoardServices/Swift-Protocol.h>

@class BSMutableKeyedSettings, NSString;

@interface FBSSceneMessage : NSObject <Swift>

{
    BSMutableKeyedSettings *_payload;
}

@property (copy, nonatomic, readonly) BSMutableKeyedSettings *payload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)message;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (Class)fallbackXPCEncodableClass;
- (id)initWithXPCDictionary:(id)arg1;
- (id)_initWithPayload:(id)arg1;

@end
