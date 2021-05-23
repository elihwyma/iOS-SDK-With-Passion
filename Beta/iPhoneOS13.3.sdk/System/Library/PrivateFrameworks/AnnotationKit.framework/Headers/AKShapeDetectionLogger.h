/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@interface AKShapeDetectionLogger : NSObject

+ (void)initialize;
+ (id)sharedInstance;

- (void)logCHDrawingToDisk:(id)arg1 withIntendedShape:(long long)arg2;
- (void)openFinderWindowToLogs;
- (_Bool)_loggingIsEnabled;
- (id)_newLogPathWithShapeName:(id)arg1;
- (id)_logsPath;
- (id)_fileName:(id)arg1;

@end
