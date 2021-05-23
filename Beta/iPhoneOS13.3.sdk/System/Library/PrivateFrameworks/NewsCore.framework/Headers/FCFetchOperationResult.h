/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSError, NSSet;

@interface FCFetchOperationResult : NSObject

{
    id _fetchedObject;
    unsigned long long _status;
    unsigned long long _fetchResult;
    NSError *_error;
    NSSet *_missingObjectDescriptions;
}

@property (copy, nonatomic) NSSet *missingObjectDescriptions;
@property (nonatomic, readonly) id fetchedObject;
@property (nonatomic, readonly) unsigned long long status;
@property (nonatomic, readonly) unsigned long long fetchResult;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) _Bool anyMissingObjects;

+ (id)resultWithStatus:(unsigned long long)arg1 fetchedObject:(id)arg2 error:(id)arg3;

- (id)initWithStatus:(unsigned long long)arg1 fetchedObject:(id)arg2 fetchResult:(unsigned long long)arg3 error:(id)arg4;

@end
