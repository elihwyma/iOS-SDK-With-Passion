/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSError;

@interface AXSimpleMessage : NSObject

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
