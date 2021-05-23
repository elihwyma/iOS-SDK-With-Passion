/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPassUpgradeRequest.h>

@class NSArray;

@interface PKPassUpgradeExpressAutomaticSelectionCriteriaRequest : PKPassUpgradeRequest

{
    NSArray *_technologyTypes;
}

@property (nonatomic, readonly) NSArray *technologyTypes;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
