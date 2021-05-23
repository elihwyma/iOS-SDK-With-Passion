/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface _CDInteractionRank : NSObject

{
    double _score;
    NSSet *_reasons;
}

@property double score;
@property (retain) NSSet *reasons;

@end
