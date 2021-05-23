/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class CKScheduler, NSString, PFCloudKitContainerProvider;

__attribute__((visibility("hidden")))
@interface CDDCloudKitServerConfiguration : NSObject

{
    NSString *_storeDirectoryPath;
    NSString *_machServiceName;
    PFCloudKitContainerProvider *_containerProvider;
    CKScheduler *_scheduler;
}

@property (retain, nonatomic) NSString *storeDirectoryPath;
@property (retain, nonatomic) NSString *machServiceName;
@property (retain, nonatomic) PFCloudKitContainerProvider *containerProvider;
@property (retain, nonatomic) CKScheduler *scheduler;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initFromOriginal:(id)arg1;

@end
