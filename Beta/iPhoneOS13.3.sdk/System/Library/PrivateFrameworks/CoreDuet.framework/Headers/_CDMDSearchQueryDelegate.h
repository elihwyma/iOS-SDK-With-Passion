/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@protocol OS_dispatch_semaphore;

@interface _CDMDSearchQueryDelegate : NSObject

{
    NSObject<OS_dispatch_semaphore> *_mdQuerySem;
    NSMutableArray *_recentMDSearchQueryResults;
}

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *mdQuerySem;
@property (retain, nonatomic) NSMutableArray *recentMDSearchQueryResults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)searchQuery:(id)arg1 didReturnItems:(id)arg2;
- (void)searchQuery:(id)arg1 statusChanged:(unsigned long long)arg2;
- (void)searchQuery:(id)arg1 didFailWithError:(id)arg2;

@end
