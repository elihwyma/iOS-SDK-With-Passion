/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <Foundation/NSObject.h>

@interface PICurveControlPoint : NSObject

{
    _Bool _editable;
    double _x;
    double _y;
}

@property (nonatomic, readonly) double x;
@property (nonatomic, readonly) double y;
@property (nonatomic, readonly, getter=isEditable) _Bool editable;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithX:(double)arg1 y:(double)arg2 editable:(_Bool)arg3;

@end
