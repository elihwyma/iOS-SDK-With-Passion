/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSNumber;

@interface SSVGratisRequestBody : NSObject

{
    NSNumber *_accountID;
    NSMutableDictionary *_additionalParameters;
    NSArray *_applications;
    _Bool _backgroundRequest;
    NSArray *_bundleIdentifiers;
    NSArray *_itemIdentifiers;
    long long _style;
}

@property (nonatomic, readonly) long long requestStyle;
@property (copy, nonatomic) NSNumber *accountIdentifier;
@property (copy, nonatomic) NSArray *applications;
@property (nonatomic, getter=isBackgroundRequest) _Bool backgroundRequest;
@property (copy, nonatomic) NSArray *bundleIdentifiers;
@property (copy, nonatomic) NSArray *itemIdentifiers;
@property (nonatomic, readonly) NSMutableDictionary *bodyDictionary;
@property (nonatomic, readonly) NSData *JSONBodyData;
@property (nonatomic, readonly) NSData *propertyListBodyData;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestStyle:(long long)arg1;
- (void)setValue:(id)arg1 forBodyParameter:(id)arg2;

@end
