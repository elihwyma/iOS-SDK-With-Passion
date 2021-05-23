/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSString, asn1Token;

__attribute__((visibility("hidden")))
@interface asn1ReceiptToken : NSObject

{
    unsigned long long mType;
    unsigned long long mTypeVersion;
    asn1Token *mContentToken;
}

@property (readonly) unsigned long long type;
@property (readonly) unsigned long long typeVersion;
@property (readonly) asn1Token *contentToken;
@property (readonly) NSString *stringValue;
@property (readonly) unsigned long long integerValue;

+ (id)readFromBuffer:(const char *)arg1;

- (void)dealloc;
- (id)description;
- (id)_initWithType:(unsigned long long)arg1 typeVersion:(unsigned long long)arg2 contentToken:(id)arg3;

@end
