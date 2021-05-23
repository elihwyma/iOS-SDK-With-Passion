/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface TIContactCollection : NSObject

{
    NSMutableArray *_contacts;
    long long _count;
    _Bool _sourceHasRelevancyScore;
}

@property (nonatomic, readonly) _Bool sourceHasRelevancyScore;
@property (nonatomic, readonly) long long count;

- (void)addContact:(id)arg1;
- (id)initWithRelevanceScoreType:(_Bool)arg1;
- (void)enumerateContactsUsingBlock:(CDUnknownBlockType)arg1;

@end
