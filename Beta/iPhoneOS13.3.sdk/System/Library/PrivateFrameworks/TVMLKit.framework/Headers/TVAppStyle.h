/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class IKColor, NSMutableDictionary, NSString;

@interface TVAppStyle : NSObject

{
    IKColor *_backgroundColor;
    NSString *_prototype;
    NSMutableDictionary *_valuesByStyle;
    CDStruct_81add385 _width;
    CDStruct_81add385 _minWidth;
    CDStruct_81add385 _maxWidth;
    CDStruct_81add385 _height;
    CDStruct_81add385 _minHeight;
    CDStruct_81add385 _maxHeight;
    CDStruct_81add385 _padding;
    CDStruct_81add385 _margin;
    CDStruct_81add385 _interitemSpacing;
    CDStruct_81add385 _fontSize;
    CDStruct_81add385 _borderRadius;
}

@property (nonatomic, readonly) NSMutableDictionary *valuesByStyle;
@property (nonatomic) CDStruct_81add385 width;
@property (nonatomic) CDStruct_81add385 minWidth;
@property (nonatomic) CDStruct_81add385 maxWidth;
@property (nonatomic) CDStruct_81add385 height;
@property (nonatomic) CDStruct_81add385 minHeight;
@property (nonatomic) CDStruct_81add385 maxHeight;
@property (nonatomic) CDStruct_81add385 padding;
@property (nonatomic) CDStruct_81add385 margin;
@property (nonatomic) CDStruct_81add385 interitemSpacing;
@property (nonatomic) CDStruct_81add385 fontSize;
@property (nonatomic) CDStruct_81add385 borderRadius;
@property (retain, nonatomic) IKColor *backgroundColor;
@property (copy, nonatomic) NSString *prototype;

- (id)valueForStyle:(id)arg1;
- (void)_setValue:(id)arg1 forStyle:(id)arg2;

@end
