/*
 Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface XBDisplayEdgeInsetsWrapper : NSObject

{
    double _topInset;
    double _leftInset;
    double _bottomInset;
    double _rightInset;
}

@property (nonatomic, readonly) double topInset;
@property (nonatomic, readonly) double leftInset;
@property (nonatomic, readonly) double bottomInset;
@property (nonatomic, readonly) double rightInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)makeWithEdgeInsets:(struct UIEdgeInsets)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (struct UIEdgeInsets)edgeInsets;
- (id)initWithTop:(double)arg1 left:(double)arg2 bottom:(double)arg3 right:(double)arg4;
- (_Bool)hasZeroInsets;

@end
