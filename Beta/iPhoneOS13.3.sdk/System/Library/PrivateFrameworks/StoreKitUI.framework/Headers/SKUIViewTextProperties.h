/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface SKUIViewTextProperties : NSObject <Swift>

{
    double _baselineOffsetFromBottom;
    double _desiredOffsetTop;
    double _firstBaselineOffset;
}

@property (nonatomic) double baselineOffsetFromBottom;
@property (nonatomic) double desiredOffsetTop;
@property (nonatomic) double firstBaselineOffset;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStringLayout:(id)arg1;
- (id)initWithTextLayout:(id)arg1 isExpanded:(_Bool)arg2;

@end
