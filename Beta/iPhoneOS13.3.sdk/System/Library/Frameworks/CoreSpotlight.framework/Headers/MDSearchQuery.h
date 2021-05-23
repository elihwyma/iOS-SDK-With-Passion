/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <Foundation/NSObject.h>

@class CSSearchQuery, NSDictionary, NSPredicate, NSString;

@protocol MDSearchQueryDelegate, OS_dispatch_queue;

@interface MDSearchQuery : NSObject

{
    unsigned long long _status;
    NSPredicate *_predicate;
    id <MDSearchQueryDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    CSSearchQuery *_query;
    NSString *_clientBundleID;
}

@property (copy) NSPredicate *predicate;
@property unsigned long long status;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CSSearchQuery *query;
@property (retain) NSString *clientBundleID;
@property (copy, readonly) NSDictionary *options;
@property (weak) id <MDSearchQueryDelegate> delegate;

- (void)cancel;
- (void)start;
- (id)initWithQueryString:(id)arg1 options:(id)arg2;
- (void)_didFinishWithError:(id)arg1;
- (id)queryString;
- (void)_didReturnItems:(id)arg1;
- (id)initWithPredicate:(id)arg1 options:(id)arg2;

@end
