/*
 Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

#import <Foundation/NSObject.h>

@class NSArray, WBSMemoryFootprintMallocZone;

@interface WBSMemoryFootprint : NSObject

{
    struct task_vm_info _vmInfo;
    NSArray *_zones;
}

@property (nonatomic, readonly) NSArray *zones;
@property (nonatomic, readonly) unsigned long long residentSize;
@property (nonatomic, readonly) unsigned long long dirtySize;
@property (nonatomic, readonly) WBSMemoryFootprintMallocZone *defaultMallocZone;

+ (id)new;
+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithError:(id *)arg1;

@end
