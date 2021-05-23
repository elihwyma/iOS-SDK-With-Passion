/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutSupplementaryEnrollment : NSObject

{
    NSString *_kind;
    NSUUID *_enrollmentIdentifier;
}

@property (nonatomic, readonly) NSString *kind;
@property (nonatomic, readonly) NSUUID *enrollmentIdentifier;

- (id)description;
- (id)initWithKind:(id)arg1;

@end
