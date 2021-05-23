/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <iTunesStore/ISOperation.h>

@class NSDictionary, SKUIReportAConcernMetadata;

__attribute__((visibility("hidden")))
@interface SKUIReportAConcernOperation : ISOperation

{
    NSDictionary *_responseDictionary;
    SKUIReportAConcernMetadata *_metadata;
}

@property (retain, nonatomic) SKUIReportAConcernMetadata *metadata;
@property (copy) NSDictionary *responseDictionary;

- (void)run;
- (id)initWithMetadata:(id)arg1;
- (id)_httpBody;

@end
