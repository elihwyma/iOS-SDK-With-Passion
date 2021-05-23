/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSString;

@interface SSDownloadMonitorItem : NSObject

{
    NSString *_clientIdentifier;
    long long _itemState;
    NSString *_representativeTitle;
    NSString *_statusString;
    long long _totalNumberOfItems;
    unsigned long long _transferTypes;
}

@property (copy, nonatomic) NSString *clientIdentifier;
@property (nonatomic) long long itemState;
@property (copy, nonatomic) NSString *representativeTitle;
@property (copy, nonatomic) NSString *statusString;
@property (nonatomic) long long totalNumberOfItems;
@property (nonatomic) unsigned long long transferTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;

@end
