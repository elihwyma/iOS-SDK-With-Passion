/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UICachedBoundingPathBitmapDataReferenceCorner : NSObject <Swift>

{
    struct _UIBoundingPathBitmapDataCorner _referenceCorner;
}

+ (_Bool)supportsSecureCoding;
+ (id)cachedReferenceCornerForRadius:(long long)arg1;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct _UIBoundingPathBitmapDataCorner)referenceCornerCopy;
- (id)initWithReferenceCorner:(struct _UIBoundingPathBitmapDataCorner)arg1;

@end
