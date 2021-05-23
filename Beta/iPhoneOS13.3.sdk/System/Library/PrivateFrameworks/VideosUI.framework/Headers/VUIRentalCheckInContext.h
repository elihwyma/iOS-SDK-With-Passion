/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface VUIRentalCheckInContext : NSObject

{
    NSNumber *_rentalID;
    NSNumber *_dsid;
}

@property (nonatomic, readonly) NSNumber *rentalID;
@property (nonatomic, readonly) NSNumber *dsid;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithRentalID:(id)arg1 dsid:(id)arg2;

@end
