/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSURLResult.h>

@class NSArray, NSDictionary;

@interface AMSMediaResult : AMSURLResult

{
    NSDictionary *_responseDictionary;
}

@property (nonatomic, readonly) NSDictionary *responseDictionary;
@property (nonatomic, readonly) NSArray *responseDataItems;

- (id)initWithResult:(id)arg1;

@end
