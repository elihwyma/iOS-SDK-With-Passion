/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SKStorefront : NSObject

{
    NSString *_countryCode;
    NSString *_identifier;
}

@property (copy, nonatomic, readonly) NSString *countryCode;
@property (copy, nonatomic, readonly) NSString *identifier;

- (id)description;
- (id)_initWithIdentifier:(id)arg1 countryCode:(id)arg2;

@end
