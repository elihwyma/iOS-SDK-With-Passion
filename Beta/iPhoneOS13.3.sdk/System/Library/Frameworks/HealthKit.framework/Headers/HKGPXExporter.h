/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKWorkoutRoute, NSFileHandle, NSISO8601DateFormatter, NSURL;

@interface HKGPXExporter : NSObject

{
    HKWorkoutRoute *_route;
    NSFileHandle *_fileHandle;
    NSISO8601DateFormatter *_isoFormatter;
    _Bool _isFinished;
    NSURL *_URL;
}

@property (copy, nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) _Bool isFinished;

+ (id)_displayNameForRoute:(id)arg1;
+ (id)fileNameForRoute:(id)arg1;

- (_Bool)finishWithError:(id *)arg1;
- (_Bool)_appendGPXHeaderWithError:(id *)arg1;
- (id)_trackpointEntryForLocation:(id)arg1;
- (_Bool)_appendString:(id)arg1 error:(id *)arg2;
- (id)initWithURL:(id)arg1 route:(id)arg2;
- (_Bool)appendLocations:(id)arg1 error:(id *)arg2;

@end
