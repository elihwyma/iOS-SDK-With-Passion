/*
 Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

#import <AssistantServices/AFSiriRequest.h>

@class NSArray;

@interface STUpdateWatchListRequest : AFSiriRequest

{
    NSArray *_contentIdentifiersToAdd;
    NSArray *_contentIdentifiersToRemove;
}

@property (copy, nonatomic, setter=_setContentIdentifiersToAdd:) NSArray *contentIdentifiersToAdd;
@property (copy, nonatomic, setter=_setContentIdentifiersToRemove:) NSArray *contentIdentifiersToRemove;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
