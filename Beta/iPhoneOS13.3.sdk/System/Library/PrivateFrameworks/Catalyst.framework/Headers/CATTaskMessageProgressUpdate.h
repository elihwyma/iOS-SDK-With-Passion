/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Catalyst/CATTaskMessage.h>

@class CATTaskProgress;

@interface CATTaskMessageProgressUpdate : CATTaskMessage

{
    CATTaskProgress *_progress;
}

@property (copy, nonatomic) CATTaskProgress *progress;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTaskUUID:(id)arg1 progress:(id)arg2;

@end
