/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString;

@interface PXLayoutMetrics : NSObject <Swift>

{
    struct CGSize _referenceSize;
}

@property (nonatomic) struct CGSize referenceSize;
@property (nonatomic, readonly) NSString *diagnosticDescription;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
