/*
 Image: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
 */

#import <NSObject.h>

@class NSDictionary, NSError;

@interface HUSimpleMessage : NSObject

{
    NSDictionary *_payload;
    NSError *_error;
}

@property (retain, nonatomic) NSDictionary *payload;
@property (retain, nonatomic) NSError *error;

+ (id)messageWithPayload:(id)arg1;

- (id)description;
- (id)initWithPayload:(id)arg1;

@end
