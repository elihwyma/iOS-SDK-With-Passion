/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSString;

@interface VSSAMLAuthenticationToken : NSObject

{
    NSData *_serializedData;
}

@property (copy, nonatomic) NSData *serializedData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSDate *expirationDate;
@property (copy, nonatomic) NSString *body;

- (_Bool)isEqual:(id)arg1;
- (_Bool)isValid;
- (_Bool)isOpaque;
- (id)initWithSerializedData:(id)arg1;
- (_Bool)isFromUnsupportedProvider;

@end
