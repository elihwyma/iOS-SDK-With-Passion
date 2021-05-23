/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@class NSUUID, PKStroke, _PKStrokeData;

@interface PKStrokeDelta : NSObject

{
    PKStroke *_deltaStroke;
    _PKStrokeData *_deltaStrokeData;
    NSUUID *_strokeUUID;
}

@property (retain, nonatomic) PKStroke *deltaStroke;
@property (retain, nonatomic) _PKStrokeData *deltaStrokeData;
@property (retain, nonatomic) NSUUID *_strokeUUID;

- (id)description;
- (id)dataRepresentation;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)initWithArchive:(const struct StrokeDelta *)arg1 error:(id *)arg2;
- (void)saveToArchive:(struct StrokeDelta *)arg1;

@end
