/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSString;

@interface VSOpaqueAuthenticationToken : NSObject

{
    NSString *_body;
    NSDate *_expirationDate;
}

@property (copy, nonatomic) NSDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *body;
@property (copy, nonatomic, readonly) NSData *serializedData;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isValid;
- (_Bool)isOpaque;
- (id)initWithSerializedData:(id)arg1;
- (_Bool)isFromUnsupportedProvider;

@end
