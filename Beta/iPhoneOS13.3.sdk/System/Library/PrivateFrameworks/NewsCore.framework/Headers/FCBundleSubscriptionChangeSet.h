/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface FCBundleSubscriptionChangeSet : NSObject

{
    NSArray *_tagIDsAdded;
    NSArray *_tagIDsRemoved;
}

@property (copy, nonatomic) NSArray *tagIDsAdded;
@property (copy, nonatomic) NSArray *tagIDsRemoved;

- (id)initWithTagIDsAdded:(id)arg1 tagIDsRemoved:(id)arg2;

@end
