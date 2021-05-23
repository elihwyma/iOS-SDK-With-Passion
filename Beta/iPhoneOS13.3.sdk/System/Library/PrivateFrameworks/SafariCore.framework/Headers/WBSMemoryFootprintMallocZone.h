/*
 Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WBSMemoryFootprintMallocZone : NSObject

{
    unsigned long long _addr;
    struct malloc_statistics_t _statistics;
    NSString *_name;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long sizeInUse;
@property (nonatomic, readonly) unsigned long long sizeAllocated;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithMallocZone:(struct _malloc_zone_t *)arg1;

@end
