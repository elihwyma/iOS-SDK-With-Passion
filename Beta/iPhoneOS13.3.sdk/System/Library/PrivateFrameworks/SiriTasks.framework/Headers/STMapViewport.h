/*
 Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

#import <AssistantServices/STSiriModelObject.h>

@class NSArray;

@interface STMapViewport : STSiriModelObject

{
    double _northLatitude;
    double _southLatitude;
    double _eastLongitude;
    double _westLongitude;
    double _timeSinceViewportChanged;
    double _timeSinceViewportEnteredForeground;
    NSArray *_viewportVertices;
}

@property (nonatomic) double northLatitude;
@property (nonatomic) double southLatitude;
@property (nonatomic) double eastLongitude;
@property (nonatomic) double westLongitude;
@property (nonatomic) double timeSinceViewportChanged;
@property (nonatomic) double timeSinceViewportEnteredForeground;
@property (copy, nonatomic) NSArray *viewportVertices;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_aceContextObjectValue;

@end
