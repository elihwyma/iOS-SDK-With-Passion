/*
 Image: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableData, NSMutableSet;

@interface WPDAdvertisingData : NSObject

{
    _Bool _isRanging;
    long long _advertRate;
    NSMutableSet *_types;
    NSMutableData *_internalData;
}

@property (retain) NSMutableData *internalData;
@property (retain) NSMutableSet *types;
@property long long advertRate;
@property (readonly, getter=getData) NSData *data;
@property _Bool isRanging;

- (id)init;
- (id)description;
- (_Bool)isEqualToData:(id)arg1;
- (void)addAdvertisingRequest:(id)arg1;
- (_Bool)isValidWithAdditionalRequest:(id)arg1;

@end
