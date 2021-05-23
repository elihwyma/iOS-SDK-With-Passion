/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface FCTagRelationships : NSObject

{
    NSArray *_relatedTopicsForOnboarding;
    NSArray *_relatedChannelsForOnboarding;
}

@property (copy, nonatomic, readonly) NSArray *relatedTopicsForOnboarding;
@property (copy, nonatomic, readonly) NSArray *relatedChannelsForOnboarding;

- (id)initWithRelatedTopicsForOnboarding:(id)arg1 relatedChannelsForOnboarding:(id)arg2;

@end
