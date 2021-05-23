/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSArray;

@protocol FCChannelProviding;

@interface FCChannelSectionHeadlinesFetchResult : NSObject

{
    id <FCChannelProviding> _channel;
    NSArray *_sectionHeadlinesGroups;
}

@property (retain, nonatomic) id <FCChannelProviding> channel;
@property (retain, nonatomic) NSArray *sectionHeadlinesGroups;

- (id)init;
- (id)initWithChannel:(id)arg1 sectionHeadlinesGroups:(id)arg2;

@end
