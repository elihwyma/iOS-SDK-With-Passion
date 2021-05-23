/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class CPLResource, NSString;

@interface CPLResourceTransferTask : NSObject

{
    _Bool _highPriority;
    _Bool _cancelled;
    NSString *_taskIdentifier;
    CPLResource *_resource;
}

@property (copy, nonatomic) NSString *taskIdentifier;
@property (retain, nonatomic) CPLResource *resource;
@property (nonatomic, getter=isHighPriority) _Bool highPriority;
@property (nonatomic, readonly, getter=isCancelled) _Bool cancelled;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (Class)classForKeyedArchiver;
- (void)launch;
- (void)cancelTask;

@end
