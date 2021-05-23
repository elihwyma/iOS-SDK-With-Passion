/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface EDAMAdParameters : FATObject

{
    NSString *_clientLanguage;
    NSArray *_impressions;
    NSNumber *_supportHtml;
    NSDictionary *_clientProperties;
}

@property (retain, nonatomic) NSString *clientLanguage;
@property (retain, nonatomic) NSArray *impressions;
@property (retain, nonatomic) NSNumber *supportHtml;
@property (retain, nonatomic) NSDictionary *clientProperties;

+ (id)structName;
+ (id)structFields;

@end
