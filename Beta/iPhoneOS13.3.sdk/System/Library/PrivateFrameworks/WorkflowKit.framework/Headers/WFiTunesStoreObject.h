/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFiTunesObject.h>

@class NSDate, NSDictionary, NSNumber, NSString;

@interface WFiTunesStoreObject : WFiTunesObject

{
    NSString *_artistID;
    NSString *_artistName;
    NSDate *_releaseDate;
    NSNumber *_price;
    NSString *_currencyCode;
    NSString *_descriptionText;
}

@property (nonatomic, readonly) NSString *artistID;
@property (nonatomic, readonly) NSString *artistName;
@property (nonatomic, readonly) NSDate *releaseDate;
@property (nonatomic, readonly) NSNumber *price;
@property (nonatomic, readonly) NSString *currencyCode;
@property (nonatomic, readonly) NSString *formattedPrice;
@property (nonatomic, readonly) NSString *descriptionText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryValue;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)descriptionTextJSONTransformer;

@end
