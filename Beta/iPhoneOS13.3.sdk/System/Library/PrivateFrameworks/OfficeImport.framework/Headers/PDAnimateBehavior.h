/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/PDTimeNode.h>

@class NSMutableArray, PDAnimationTarget;

__attribute__((visibility("hidden")))
@interface PDAnimateBehavior : PDTimeNode

{
    PDAnimationTarget *mTgtElement;
    NSMutableArray *mAttributeNames;
}

@property (retain, nonatomic) NSMutableArray *attributeNames;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)setTarget:(id)arg1;
- (id)target;

@end
