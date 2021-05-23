/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@interface WBSSingleCreditCardData : NSObject

{
    id _value;
    long long _type;
}

@property (nonatomic, readonly) id value;
@property (nonatomic, readonly) long long type;

- (id)init;
- (id)initWithValue:(id)arg1 type:(long long)arg2;

@end
