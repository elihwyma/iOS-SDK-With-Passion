/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface IKFourTuple : NSObject

{
    NSString *_namedStyle;
    long long _specifiedValueCount;
    double _values[4];
}

@property (nonatomic, readonly) NSString *namedStyle;
@property (nonatomic, readonly) struct IKCornerRadii cornerRadiiValue;
@property (nonatomic, readonly) struct UIEdgeInsets edgeInsetsValue;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCornerRadii:(struct IKCornerRadii)arg1;
- (id)initWithStyleString:(id)arg1;

@end
