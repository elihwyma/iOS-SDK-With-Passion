/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@class CNContactStore, NSArray, NSDictionary;

@interface GKContactDataSource : NSObject

{
    NSArray *_contacts;
    NSArray *_sectionHeaders;
    NSDictionary *_sectionToContactIndexes;
    NSArray *_skipValues;
    NSDictionary *_skipToContactIndexes;
    CNContactStore *_store;
}

@property (retain, nonatomic) CNContactStore *store;
@property (retain, nonatomic) NSArray *contacts;
@property (retain, nonatomic) NSArray *sectionHeaders;
@property (retain, nonatomic) NSDictionary *sectionToContactIndexes;
@property (retain, nonatomic) NSArray *skipValues;
@property (retain, nonatomic) NSDictionary *skipToContactIndexes;

- (id)init;
- (void)dealloc;
- (void)loadContactsWithHandler:(CDUnknownBlockType)arg1;

@end
