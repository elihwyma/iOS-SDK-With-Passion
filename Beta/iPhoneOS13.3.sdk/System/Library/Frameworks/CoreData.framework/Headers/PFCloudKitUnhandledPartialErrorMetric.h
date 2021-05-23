/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/PFCloudKitBaseMetric.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface PFCloudKitUnhandledPartialErrorMetric : PFCloudKitBaseMetric

{
    NSNumber *_errorCode;
    NSString *_errorDomain;
}

@property (nonatomic, readonly) NSString *errorDomain;
@property (nonatomic, readonly) NSNumber *errorCode;

- (void)dealloc;
- (id)name;
- (id)payload;
- (id)initWithContainerIdentifier:(id)arg1 error:(id)arg2;

@end
