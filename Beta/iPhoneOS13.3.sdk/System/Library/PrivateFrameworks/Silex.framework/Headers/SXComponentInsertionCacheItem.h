/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSArray;

@protocol SXComponentInserter, SXComponentInsertionCacheValidator;

@interface SXComponentInsertionCacheItem : NSObject

{
    id <SXComponentInserter> _inserter;
    id <SXComponentInsertionCacheValidator> _validator;
    NSArray *_results;
}

@property (nonatomic, readonly) id <SXComponentInserter> inserter;
@property (nonatomic, readonly) id <SXComponentInsertionCacheValidator> validator;
@property (nonatomic, readonly) NSArray *results;

- (id)initWithInserter:(id)arg1 validator:(id)arg2 results:(id)arg3;

@end
