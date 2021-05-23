/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/PFCloudKitUnhandledPartialErrorMetric.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PFCloudKitFatalErrorMetric : PFCloudKitUnhandledPartialErrorMetric

{
    NSString *_requestClass;
}

@property (nonatomic, readonly) NSString *requestClass;

- (void)dealloc;
- (id)name;
- (id)payload;
- (id)initWithContainerIdentifier:(id)arg1 result:(id)arg2;

@end
