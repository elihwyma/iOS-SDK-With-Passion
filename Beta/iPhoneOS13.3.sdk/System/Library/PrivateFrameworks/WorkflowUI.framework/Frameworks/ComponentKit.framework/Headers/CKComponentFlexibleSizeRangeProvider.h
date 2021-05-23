/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CKComponentFlexibleSizeRangeProvider : NSObject

{
    long long _flexibility;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)providerWithFlexibility:(long long)arg1;

- (id)init;
- (struct CKSizeRange)sizeRangeForBoundingSize:(struct CGSize)arg1;
- (id)initWithFlexibility:(long long)arg1;

@end
