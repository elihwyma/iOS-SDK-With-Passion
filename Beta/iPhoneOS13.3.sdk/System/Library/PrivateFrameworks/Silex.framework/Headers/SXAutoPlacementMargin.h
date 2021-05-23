/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SXAutoPlacementMargin : NSObject

{
    struct _SXConvertibleValue _top;
    struct _SXConvertibleValue _right;
    struct _SXConvertibleValue _bottom;
    struct _SXConvertibleValue _left;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct _SXConvertibleValue left;
@property (nonatomic, readonly) struct _SXConvertibleValue right;
@property (nonatomic, readonly) struct _SXConvertibleValue top;
@property (nonatomic, readonly) struct _SXConvertibleValue bottom;

- (id)initWithTop:(struct _SXConvertibleValue)arg1 bottom:(struct _SXConvertibleValue)arg2;

@end
