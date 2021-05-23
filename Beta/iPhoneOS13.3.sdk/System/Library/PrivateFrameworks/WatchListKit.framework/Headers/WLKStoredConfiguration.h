/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface WLKStoredConfiguration : NSObject

{
    _Bool _activeUser;
    NSDictionary *_requiredRequestKeyValuePairs;
    NSDate *_timestamp;
    NSString *_utsc;
    NSString *_vppaState;
}

@property (retain, nonatomic) NSDictionary *requiredRequestKeyValuePairs;
@property (nonatomic) _Bool activeUser;
@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSString *vppaState;
@property (retain, nonatomic) NSString *utsc;
@property (nonatomic, readonly) NSString *utsk;

- (id)description;

@end
