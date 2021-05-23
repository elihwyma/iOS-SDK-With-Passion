/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface PFCloudKitBaseMetric : NSObject

{
    NSString *_containerIdentifier;
    NSString *_processName;
}

@property (nonatomic, readonly) NSString *containerIdentifier;
@property (nonatomic, readonly) NSString *processName;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSDictionary *payload;

- (void)dealloc;
- (id)description;
- (id)initWithContainerIdentifier:(id)arg1;

@end
