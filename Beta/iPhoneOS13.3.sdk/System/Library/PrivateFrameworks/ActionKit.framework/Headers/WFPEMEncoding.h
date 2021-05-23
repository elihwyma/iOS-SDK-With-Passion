/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface WFPEMEncoding : NSObject

{
    NSString *_type;
    NSData *_data;
}

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSData *data;

+ (id)decodePEM:(id)arg1 error:(id *)arg2;

- (id)initWithType:(id)arg1 data:(id)arg2;
- (id)encodedPEM;

@end
