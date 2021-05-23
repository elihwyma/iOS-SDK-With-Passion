/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class NSData;

@interface INExtensionContextSlotResolutionResult : NSObject <Swift>

{
    long long _result;
    NSData *_data;
}

@property (nonatomic, readonly) long long result;
@property (nonatomic, readonly) NSData *data;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResult:(long long)arg1 data:(id)arg2;

@end
