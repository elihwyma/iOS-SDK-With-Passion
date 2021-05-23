/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, SKUIReportAConcernReason;

__attribute__((visibility("hidden")))
@interface SKUIReportAConcernMetadata : NSObject

{
    NSURL *_reportConcernURL;
    long long _itemIdentifier;
    SKUIReportAConcernReason *_selectedReason;
    NSString *_details;
}

@property (copy, nonatomic) NSURL *reportConcernURL;
@property (nonatomic) long long itemIdentifier;
@property (retain, nonatomic) SKUIReportAConcernReason *selectedReason;
@property (copy, nonatomic) NSString *details;

@end
