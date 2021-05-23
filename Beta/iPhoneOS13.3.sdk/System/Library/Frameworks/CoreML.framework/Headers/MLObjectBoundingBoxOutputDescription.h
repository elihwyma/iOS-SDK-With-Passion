/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface MLObjectBoundingBoxOutputDescription : NSObject

{
    int _format;
    NSString *_confidenceFeatureName;
    NSString *_coordinatesFeatureName;
    NSArray *_labelNames;
}

@property int format;
@property (retain) NSString *confidenceFeatureName;
@property (retain) NSString *coordinatesFeatureName;
@property (retain) NSArray *labelNames;

@end
