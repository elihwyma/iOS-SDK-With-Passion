/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface FBSOpenApplicationOptions : NSObject

{
    NSMutableDictionary *_payload;
}

@property (copy, nonatomic) NSDictionary *dictionary;
@property (nonatomic, readonly) NSURL *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)optionsWithDictionary:(id)arg1;
+ (_Bool)supportsBSXPCSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)_sanitizeAndValidatePayload;

@end
