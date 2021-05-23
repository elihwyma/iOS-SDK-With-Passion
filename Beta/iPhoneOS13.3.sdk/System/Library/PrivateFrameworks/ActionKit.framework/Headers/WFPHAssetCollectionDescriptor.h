/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/MTLModel.h>

@class NSString;

@interface WFPHAssetCollectionDescriptor : MTLModel

{
    NSString *_localIdentifier;
    NSString *_localizedTitle;
}

@property (copy, nonatomic, readonly) NSString *localIdentifier;
@property (copy, nonatomic, readonly) NSString *localizedTitle;

+ (_Bool)supportsSecureCoding;
+ (id)JSONKeyPathsByPropertyKey;
+ (unsigned long long)storageBehaviorForPropertyWithKey:(id)arg1;

- (id)initWithLocalIdentifier:(id)arg1 localizedTitle:(id)arg2;

@end
