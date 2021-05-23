/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface SXComponentInserterManager : NSObject

{
    NSMutableArray *_mutableInserters;
}

@property (nonatomic, readonly) NSMutableArray *mutableInserters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *inserters;

- (id)init;
- (void)addInserter:(id)arg1;
- (void)removeInserter:(id)arg1;

@end
