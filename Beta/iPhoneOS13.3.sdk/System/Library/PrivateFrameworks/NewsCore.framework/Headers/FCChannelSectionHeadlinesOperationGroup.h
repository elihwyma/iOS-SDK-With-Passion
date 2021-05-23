/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSArray;

@protocol FCSectionProviding;

@interface FCChannelSectionHeadlinesOperationGroup : NSObject

{
    id <FCSectionProviding> _section;
    NSArray *_headlines;
}

@property (retain, nonatomic) id <FCSectionProviding> section;
@property (retain, nonatomic) NSArray *headlines;

- (id)init;
- (id)description;
- (id)initWithSection:(id)arg1 headlines:(id)arg2;

@end
