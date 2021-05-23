/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class NSString;

@interface ARWorldAlignmentData : NSObject <Swift>

{
    unsigned long long _modifiers;
    CDStruct_14d5dc5e _worldAlignmentTransform;
}

@property (nonatomic) CDStruct_14d5dc5e worldAlignmentTransform;
@property (nonatomic, readonly) unsigned long long worldAlignmentModifiers;
@property (nonatomic) _Bool worldAlignmentReset;
@property (nonatomic) _Bool referenceOriginChanged;
@property (nonatomic) _Bool sessionShouldResumeCameraPosition;
@property (nonatomic) _Bool sessionShouldResumeCameraPositionAndHeading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
