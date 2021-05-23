/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface CATAddress : NSObject

{
    NSString *_address;
    NSData *_data;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *address;
@property (nonatomic, readonly, getter=isAny) _Bool any;
@property (nonatomic, readonly, getter=isLocalWiFi) _Bool localWiFi;

+ (id)any;
+ (id)localWiFi;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithData:(id)arg1;
- (id)initWithString:(id)arg1;
- (_Bool)isEqualToAddress:(id)arg1;

@end
