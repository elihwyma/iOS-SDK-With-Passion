/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface SSSoftwareUpdate : NSObject

{
    NSDictionary *_dictionary;
    NSDate *_installDate;
    long long _updateState;
}

@property (nonatomic, readonly) NSDictionary *updateDictionary;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (copy, nonatomic) NSDate *installDate;
@property (nonatomic, readonly) long long parentalControlsRank;
@property (nonatomic, readonly) long long storeItemIdentifier;
@property (nonatomic) long long updateState;

- (void)dealloc;
- (id)initWithUpdateDictionary:(id)arg1;

@end
