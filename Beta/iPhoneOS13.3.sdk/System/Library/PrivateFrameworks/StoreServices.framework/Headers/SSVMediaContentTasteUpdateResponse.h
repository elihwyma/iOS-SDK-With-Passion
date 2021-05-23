/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSDate, NSString;

@interface SSVMediaContentTasteUpdateResponse : NSObject

{
    _Bool _cachedResponse;
    NSArray *_contentTasteItems;
    NSDate *_expirationDate;
    unsigned long long _responseRevisionID;
}

@property (copy, nonatomic) NSArray *contentTasteItems;
@property (copy, nonatomic) NSDate *expirationDate;
@property (nonatomic) unsigned long long responseRevisionID;
@property (nonatomic, getter=isCachedResponse) _Bool cachedResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;

@end
