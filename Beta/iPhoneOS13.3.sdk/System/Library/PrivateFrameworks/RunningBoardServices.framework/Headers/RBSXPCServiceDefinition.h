/*
 Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

#import <NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface RBSXPCServiceDefinition : NSObject

{
    NSString *_identifier;
    long long _variant;
    long long _scope;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long variant;
@property (nonatomic, readonly) long long scope;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (_Bool)supportsBSXPCSecureCoding;
+ (id)definitionWithIdentifier:(id)arg1 variant:(long long)arg2 scope:(long long)arg3;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;

@end
