/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@class NSDate, NSUUID, PKDrawing;

@interface AKSignature : NSObject

{
    PKDrawing *_drawing;
    struct CGPath *_path;
    struct CGRect _strokesBounds;
    _Bool _shouldPersist;
    NSUUID *_uniqueID;
    double _baselineOffset;
    NSDate *_creationDate;
}

@property (retain) NSUUID *uniqueID;
@property (retain) NSDate *creationDate;
@property double baselineOffset;
@property _Bool shouldPersist;
@property (readonly) struct CGPath *path;
@property (readonly) struct CGRect pathBounds;
@property (readonly) PKDrawing *drawing;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setPath:(struct CGPath *)arg1;
- (id)initWithDrawing:(id)arg1 path:(struct CGPath *)arg2 baselineOffset:(double)arg3 creationDate:(id)arg4;
- (id)initWithDrawing:(id)arg1 path:(struct CGPath *)arg2 baselineOffset:(double)arg3;
- (id)initForTesting;

@end
