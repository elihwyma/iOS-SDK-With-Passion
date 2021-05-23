/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/MTLModel.h>

@class NSDictionary, NSNumber, NSString, NSURL;

@interface WFUberProduct : MTLModel

{
    _Bool _shared;
    NSString *_productId;
    NSString *_productDescription;
    unsigned long long _productGroup;
    NSString *_displayName;
    NSNumber *_capacity;
    NSURL *_pictureURL;
}

@property (nonatomic, readonly) NSString *productId;
@property (nonatomic, readonly) NSString *productDescription;
@property (nonatomic, readonly) unsigned long long productGroup;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSNumber *capacity;
@property (nonatomic, readonly) NSURL *pictureURL;
@property (nonatomic, readonly) _Bool shared;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryValue;

+ (_Bool)supportsSecureCoding;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)pictureURLJSONTransformer;
+ (id)productGroupJSONTransformer;
+ (id)productWithProductId:(id)arg1;

- (id)initWithProductId:(id)arg1;

@end
