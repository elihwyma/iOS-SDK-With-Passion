/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class CNObservableContractEnforcement, CNVirtualScheduler, NSArray, NSMutableArray, NSString;

@interface CNTestableObserver : NSObject

{
    CNVirtualScheduler *_scheduler;
    NSMutableArray *_results;
    CNObservableContractEnforcement *_enforcement;
}

@property (readonly) NSArray *results;
@property (readonly) NSArray *resultValues;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)observerWithScheduler:(id)arg1;

- (void)observerDidReceiveResult:(id)arg1;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidComplete;
- (id)initWithScheduler:(id)arg1;

@end
