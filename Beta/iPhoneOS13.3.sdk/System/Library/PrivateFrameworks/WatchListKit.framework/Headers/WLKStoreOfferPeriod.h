/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface WLKStoreOfferPeriod : NSObject

{
    NSString *_type;
    NSNumber *_duration;
}

@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSNumber *duration;

- (id)initWithString:(id)arg1;
- (id)_offerPeriodForString:(id)arg1;

@end
