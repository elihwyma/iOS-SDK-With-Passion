/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface TIContact : NSObject

{
    _Bool _hasRelevancyScore;
    float _relevancyScore;
    NSString *_familyName;
    NSString *_phoneticFamilyName;
    NSString *_givenName;
    NSString *_phoneticGivenName;
    NSString *_middleName;
    NSString *_phoneticMiddleName;
    NSString *_organizationName;
    NSString *_jobTitle;
    NSString *_nickname;
    NSArray *_relations;
    NSArray *_cities;
}

@property (retain, nonatomic) NSString *familyName;
@property (retain, nonatomic) NSString *phoneticFamilyName;
@property (retain, nonatomic) NSString *givenName;
@property (retain, nonatomic) NSString *phoneticGivenName;
@property (retain, nonatomic) NSString *middleName;
@property (retain, nonatomic) NSString *phoneticMiddleName;
@property (retain, nonatomic) NSString *organizationName;
@property (retain, nonatomic) NSString *jobTitle;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSArray *relations;
@property (retain, nonatomic) NSArray *cities;
@property (nonatomic) _Bool hasRelevancyScore;
@property (nonatomic) float relevancyScore;

- (id)flatten;

@end
