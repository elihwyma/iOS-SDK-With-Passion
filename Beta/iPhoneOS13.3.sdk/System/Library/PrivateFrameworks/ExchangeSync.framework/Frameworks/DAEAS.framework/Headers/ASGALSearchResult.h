/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASItem.h>

@class NSArray, NSData, NSDictionary, NSMutableArray, NSString;

@interface ASGALSearchResult : ASItem

{
    NSString *_longID;
    NSArray *_classes;
    NSArray *_collectionIDs;
    NSString *_phone;
    NSString *_office;
    NSString *_title;
    NSString *_company;
    NSString *_alias;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_homePhone;
    NSString *_mobilePhone;
    NSString *_emailAddress;
    NSData *_photoData;
    NSDictionary *_applicationData;
    NSMutableArray *_mClasses;
    NSMutableArray *_mCollectionIDs;
}

@property (retain, nonatomic) NSDictionary *applicationData;
@property (retain, nonatomic) NSMutableArray *mClasses;
@property (retain, nonatomic) NSMutableArray *mCollectionIDs;
@property (retain, nonatomic) NSString *longID;
@property (retain, nonatomic) NSArray *classes;
@property (retain, nonatomic) NSArray *collectionIDs;
@property (copy, nonatomic) NSString *phone;
@property (copy, nonatomic) NSString *office;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *company;
@property (copy, nonatomic) NSString *alias;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *homePhone;
@property (copy, nonatomic) NSString *mobilePhone;
@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSData *photoData;

+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)description;
- (void)addClass:(id)arg1;
- (id)convertToDAContactSearchResultElement;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (void)postProcessApplicationData;
- (void)addCollectionID:(id)arg1;

@end
