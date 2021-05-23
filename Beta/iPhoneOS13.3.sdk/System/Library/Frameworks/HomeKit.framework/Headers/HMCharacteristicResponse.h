/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class HMCharacteristicRequest, NSError;

@interface HMCharacteristicResponse : NSObject

{
    HMCharacteristicRequest *_request;
    NSError *_error;
}

@property (retain, nonatomic) HMCharacteristicRequest *request;
@property (nonatomic, readonly) NSError *error;

- (_Bool)isEqual:(id)arg1;
- (id)initWithRequest:(id)arg1 error:(id)arg2;

@end
